#include <stdio.h>

/**
 *  main - creating a program for printing
 *  digits from 0 - 10
 *  Return: retuirn 0 and exit program
 */
int main(void)
{
	int myNum;

	for (myNum = 0; myNum <= 10; myNum++)
		putchar(myNum);
	putchar('\n');

	return (0);
}
