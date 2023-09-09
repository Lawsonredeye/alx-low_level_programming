#include <stdio.h>
/**
 * main - display possible combp
 * of two digit-numbers
 * Return: return 0 and exit
 */
int main(void)
{
	int p1, p2;

	for (p1 = 0; p1 <= 99; p1++)
	{
		for (p2 = 0; p2 <= 99; p2++)
		{
			if (p1 < p2 && p1 != p2)
			{
				putchar((p1 / 10) + '0');
				putchar((p1 % 10) + '0');
				putchar(' ');
				putchar((p2 / 10) + '0');
				putchar((p2 % 10) + '0');
				if (p1 != 98 || p2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
