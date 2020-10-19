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
	char *newname, *newowner;
	int nlen = 0, olen = 0;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	while (name[nlen])
		nlen++;
	while (owner[olen])
		olen++;

	newname = malloc((nlen + 1) * sizeof(char));
	if (newname == NULL)
	{
		free(newname);
		return (NULL);
	}
	newowner = malloc((olen + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newowner);
		return (NULL);
	}

	newname = name;
	newowner = owner;

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
