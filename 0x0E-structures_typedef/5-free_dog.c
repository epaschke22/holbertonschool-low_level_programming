#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees up the allocated memory of the new dog
 * @d: dog struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
