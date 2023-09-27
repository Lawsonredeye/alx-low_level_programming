#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function to an 8x8 chessboard
 * @a: type char variable
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);
	}
}
