#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function that returns value of y
 * @x: int var char
 * @y: int var char to pow
 * Return: _pow_recursion
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
