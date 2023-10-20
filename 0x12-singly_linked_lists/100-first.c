#include <stdio.h>

void easyFunc(void) __attribute__ ((constructor));
/**
 * easyFunc - prints a statement before the main function
 * Return: returns (0)
 */
void easyFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon myback!\n");
}
