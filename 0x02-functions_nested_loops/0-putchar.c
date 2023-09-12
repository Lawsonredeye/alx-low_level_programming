#include "main.h"

/**
 * main - this is used to write _putchar
 * followed by a new line
 * Return: return 0 to show succes
 */
int main(void)
{
	char myName[] = "_putchar\n";
	int i;

	for (i = 0; myName[i] != '\0'; i++)
	{
		_putchar(myName[i]);
	}
	return (0);
}
