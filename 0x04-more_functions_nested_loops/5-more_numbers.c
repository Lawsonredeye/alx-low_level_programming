#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 *variable
 *
 * Return: Always return 0
 */

void more_numbers(void)
{
	int bay, jay;

	for (bay = 0; bay < 10; bay++)
	{
		for (jay = 0; jay <= 14; jay++)
		{
			if (jay > 9)
			{
				_putchar('0' + (jay / 10));
			}
			if (jay <= 14)
			{
				_putchar('0' + (jay % 10));
			}
		}
		_putchar('\n');

	}
}
