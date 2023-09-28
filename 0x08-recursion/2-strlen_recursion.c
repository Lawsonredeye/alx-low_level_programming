#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - calculate a string lenght
 * @s: pointer char variable
 * Return: 1 + strlen_recursion
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
