#include <stdio.h>

/**
 * easyFunc - prints a statement before the main function
 * Return: returns (0)
 */
__attribute__ ((constructor)) void easyFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon myback!\n");
}
