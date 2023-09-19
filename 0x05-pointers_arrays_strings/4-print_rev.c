#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer variable to a string
 * Return: 0 always
 */
void print_rev(char *s)
{
	int stren = 0;

	while (s[stren] != '\0')
	{
		stren++;
	}

	int v;
	for (v = stren - 1; v >= 0; v--)
	{
		putchar(s[v]);
	}
	putchar('\n');
}
