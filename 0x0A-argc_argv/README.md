# project for 0x0A. C - argc, argv

In this project we discussed about argc - known as argument count which is used to count the number of arguments passed to the program in the commant line.
Its important to know that its of type integer and it returns decimal values unlike the argv which returns characters.

The argv is a pointer and also an array which stores the list of all arguments from the command line and also each arguments is a piece of text(strings).

Heres the syntax of how its declared in a given .C file
	Syntax:
		#include <stdio.h>

		int main (int argc, char *argv)
		{
			CODE TO BE EXECUTED GOES HERE...
		}
