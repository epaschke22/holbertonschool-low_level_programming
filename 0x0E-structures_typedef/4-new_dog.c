#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i;
	char *newname, *newowner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newname = malloc(sizeof(newdog->name));
	if (newname == NULL)
	{
		free(newname);
		return (NULL);
	}
	newowner = malloc(sizeof(newdog->owner));
	if (newowner == NULL)
	{
		free(newowner);
		return (NULL);
	}

	for (i = 0; i < sizeof(newdog->name); i++)
		newname[i] = name[i];
	for (i = 0; i < sizeof(newdog->owner); i++)
		newowner[i] = owner[i];

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
