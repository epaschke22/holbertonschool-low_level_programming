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
	int nlen = 0, olen = 0, i;

	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	while (name[nlen])
		nlen++;
	while (owner[olen])
		olen++;

	newname = malloc((nlen + 1) * sizeof(char));
	if (newname == NULL)
		return (NULL);
	newowner = malloc((olen + 1) * sizeof(char));
	if (newowner == NULL)
		return (NULL);

	for (i = 0; i < nlen; i++)
		newname[i] = name[i];
	for (i = 0; i < olen; i++)
		newowner[i] = owner[i];

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;
	return (newdog);
}
