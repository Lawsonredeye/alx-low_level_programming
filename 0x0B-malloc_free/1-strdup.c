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

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}

/**
 * mycpy - copy string
 * @dest: char var pointer
 * @src: char var pointer
 * Return: nothing
 */
void mycpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: char pointer var
 * Return: j
 */
char *_strdup(char *str)
{
	char *j = malloc((len(str) + 1) * sizeof(char));

	if (j == NULL)
	{
		printf("Error");
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		mycpy(j, str);
	}
	return (j);
}
