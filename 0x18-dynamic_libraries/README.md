# Dynamic Libraries and its operations

A dynamic library, also known as a shared library, is a type of binary file that contains code and data that can be used by multiple programs at the same time.

Unlike static libraries, which are linked with a program at compile time and become part of the executable, dynamic libraries are loaded at runtime.

This allows multiple programs to share the same library, reducing redundancy and saving memory.

Here's a brief overview of how dynamic libraries work, how to create one, and how to use it:

### How Dynamic Libraries Work:

1. **Compilation:**
    - Source code is compiled into object code (machine code).
    - For dynamic libraries, the object code is not linked to the final executable.
2. **Creation of Shared Library:**
    - The object code is combined with other necessary information to create a dynamic library file.
    - On Unix-like systems, common formats for dynamic libraries include `.so` (Shared Object) files.
3. **Loading at Runtime:**
    - When a program is run, it dynamically loads the necessary dynamic libraries into memory.
    - The linking occurs at runtime, allowing multiple programs to use the same library concurrently.

### Creating a Dynamic Library (Example in C/C++):

Assuming you have a source file `mylib.c`:

```c
// mylib.c
#include <stdio.h>

void myFunction() {
    printf("Hello from myFunction!\\n");
}

```

1. **Compilation:**
    
    ```bash
    gcc -c -fPIC mylib.c -o mylib.o
    
    ```
    
2. **Creating Shared Library:**
    
    ```bash
    gcc -shared -o libmylib.so mylib.o
    
    ```
    

### Using Dynamic Library in Another Program:

Assuming you have a program `main.c`:

```c
// main.c
#include <stdio.h>
#include <dlfcn.h> // Dynamic Loading Library

int main() {
    void *handle = dlopen("libmylib.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "Error opening library: %s\\n", dlerror());
        return 1;
    }

    // Get function pointer
    void (*myFunction)() = dlsym(handle, "myFunction");
    if (!myFunction) {
        fprintf(stderr, "Error finding symbol: %s\\n", dlerror());
        dlclose(handle);
        return 1;
    }

    // Call function
    myFunction();

    // Close library
    dlclose(handle);

    return 0;
}

```

1. **Compilation:**
    
    ```bash
    gcc -o main main.c -ldl
    
    ```
    
2. **Running the Program:**
    
    ```bash
    ./main
    
    ```
    

This example demonstrates the basic steps to create and use a dynamic library. Remember to handle errors appropriately and include necessary headers. Additionally, the process may vary slightly depending on your operating system and development environment.
