#include <stdio.h>

/**
 *  main - creating a program for printing
 *  digits from 0 - 10
 *  Return: return 0 and exit program
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
