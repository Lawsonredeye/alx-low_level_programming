# 0x0F. C - Function pointers
`Function pointers` are pointers that points to the address of a function (which is stored as instructions in the computer memory) to carryout the operation of the function.

To do this a pointer of the same data type has to be declared and enclosed in braces then call the function, storing its address and having acces to its parameters.

Here's how `function pointers` are defined;
	`int add(int a, int b);` // function to be stored in a pointer
	`int (*funadd)(int , int) = &add;` // function pointer that stores the value of the function add

The `funadd` has been declared and initialized to store the address of the function `add` and it can be used as
	`funadd(x, y);` // where x and y are the actual parameters passing values to the `function add`
