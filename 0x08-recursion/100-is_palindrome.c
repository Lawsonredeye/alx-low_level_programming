#include <stdio.h>
#include "main.h"

/**
 * lengthstring - function to calculates string lenght
 * @num: var int to lenghtstring
 * Return: num on execution
 */
int lengthstring(char *num)
{
	if (*num == '\0')
	{
		return (0);
	}
	return (1 + lengthstring(num + 1));
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: var pointer to char
 * Return: is_palindrome on call
 */
int is_palindrome(char *s)
{
	int len = lengthstring(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] != s[len - 1])
	{
		return (0);
	}
	return (is_palindrome(s + 1));
}
