#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: dog age
 * @owner: current dog owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname;
	char *cpyowner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	cpyowner = malloc((strlen(owner) + 1) * sizeof(char));
	if (cpyowner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
	{
		strcpy(cpyowner, owner);
	}

	cpyname = malloc((strlen(name) + 1) * sizeof(char));
	if (cpyname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	else
	{
		strcpy(cpyname, name);
	}

	new_dog->name = cpyname;
	new_dog->age = age;
	new_dog->owner = cpyowner;
	return (new_dog);
}
