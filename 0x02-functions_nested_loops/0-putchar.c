#include <stdio.h>
#include "main.h"

/**
 * main - this is used to write _putchar
 * followed by a new line
 * Return: return 0 to show succes
 */
int main(void)
{
	char myName[] = "_putchar";

	for (int i = 0; myName[i] != '\0'; i++)
	{
		_putchar(myName[i]);
	}
	_putchar('\n');
	return (0);
}
