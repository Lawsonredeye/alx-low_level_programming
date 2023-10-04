#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * len - calculates the string lenght
 * @s: char variable pointer
 * Return: i
 */
int len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		i++;
	return (i);
}

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: k
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = len(s1);
	len2 = len(s2);

	k = malloc((len1 + len2 + 1) * sizeof(char));
	if (k == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			k[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			k[i + j] = s2[j];
		}
		k[i + j] = '\0';
	}
	return (k);
}
