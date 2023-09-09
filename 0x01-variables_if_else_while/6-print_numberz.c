#include <stdio.h>

/**
 *  main - creating single digit numbers
 *  using putchar only
 *  Return: return 0 and end program
 */
int main(void)
{
	int kiks;

	for (kiks = 0; kiks <= 10; kiks++)
		putchar(kiks);
	putchar('\n');
	return (0);
}
