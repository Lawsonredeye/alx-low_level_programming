#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string, in reverse followed by a new line.
 * @str: char data type pointer
 * Return: Always 0.
 */
void print_rev(char *str)
{
	int a;
	int whot;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for  (a = a - 1; a >= 0; a--)
	{
		whot = str[a];
		_putchar(whot);
	}
	_putchar('\n');
}
