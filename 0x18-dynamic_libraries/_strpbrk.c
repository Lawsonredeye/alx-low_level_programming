#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches for string of byte
 * @s: char pointer variable
 * @accept: pointer char variable
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}