#include <stdio.h>

/**
 * main - print possible combo
 * Return: return 0 and end program
 */
int main(void)
{
	int assemble;

	assemble = '0';
	while (assemble <= '9')
	{
		putchar(assemble);
	if (assemble != '9')
	{
		putchar(',');
		putchar(' ');
	}
		assemble++;
	}
	putchar('\n');
	return (0);
}
