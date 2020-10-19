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

	newname = malloc(sizeof(name) + 1);
	if (newname == NULL)
	{
		free(newdog);
		free(newname);
		return (NULL);
	}
	newowner = malloc(sizeof(owner) + 1);
	if (newowner == NULL)
	{
		free(newdog);
		free(newname);
		free(newowner);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		newname[i] = name[i];
	newname[i] = '\0';
	for (i = 0; owner[i]; i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
