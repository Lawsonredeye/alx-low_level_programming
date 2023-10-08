#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of element
 * Return: b
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *b;
	unsigned int len = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n >= len2)
	{
		n = len2;
	}
	b = malloc(sizeof(*b) * (len + n + 1));

	if (b == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		b[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		b[i + j] = s2[j];
	}
	b[len + n] = '\0';
	return (b);
}
