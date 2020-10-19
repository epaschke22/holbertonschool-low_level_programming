#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the values for struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
