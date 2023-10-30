# Input/Output System Calls

## 1. C create
The `create()` function is used to create a new empty file in C. It is defined inside `<unistd.h>` header file and the flags that are passed as arguments are defined inside `<fcntl.h>` header file.

### Syntax of create() in C
`int create(char *filename, mode_t mode);`
where *file name is the actual name you want to create and mode is the permission of the file i.e read 

The create function returns the first unused file descriptor i.e 3 because the `0,1,2` are reserved by the OS. It also `returns -1 on error`.

## 2. C open
the open is used to open a file in c for either **reading, writing or both**.
It is also capable of creating a file if it doesnt exist. It uses the **<unistd.h>** header file and its supporting flags which are passed as an argument are defined inside the <fcntl.h> header file.

### Syntax of open() in C
`int open (const char* Path, int flags);`

**Where** path reps the path location of the file beginning with `/`.
1. Use the absolute path beginning with “/” when you are not working in the same directory as the C source file.
2. Use relative path which is only the file name with extension, when you are working in the same directory as the C source file.
where flags is how we want to open the file i.e O_RDONLY, O_WRONLY etc.

the open() function returns -1 on error, find the existing file on the disk and create a file table entry. It also set the unsed file descriptor to point to the first table entry.

## 3. C close

This is used to close files after they've been opened and read or written into and it uses the **<unistd.h>** header library. It is good practice to always close open files after youre done working on them to tell the operating system that youre done working  on them and closes the file pointed by the descriptor.

### Syntax of close() in C
`int close(int fd);`

where fd is the file descriptor that you want to close
close() returns 0 on success and -1 on error.

## 4. C read
it uses the file described by the file descriptor to read the specified amount of bytes of input into the memory area which is displayed by a buffer that is created.
Read() updates the access time for a fil and the read() uses the **<unistd.h>** header file.

### Syntax of read() in C
**size_t read (int fd, void* buf, size_t cnt);**

where fd is the valid file descriptor (**returned from the open()**), buf is the buffer to read from and cnt is the lenght of the buffer.

its important to note that it returns the number of bytes it read on succes, 0 when it reaches the end of file, -1 on error and -1 also on signal interrupt.

## Important Points
1. buf needs to point to a valid memory location with a length not smaller than the specified size because of overflow.
2. fd should be a valid file descriptor returned from open() to perform the read operation because if fd is NULL then the read should generate an error.
3. cnt is the requested number of bytes read, while the return value is the actual number of bytes read. Also, some times read system call should read fewer bytes than cnt.
