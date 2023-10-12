#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer variable name from main
 * @f: func pointer
 * Return: Nothing because of void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr_name)(char *);

	ptr_name = f;
	ptr_name(name);
}
