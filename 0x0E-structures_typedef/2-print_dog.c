#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints out each attribute of dog
 * @d: dog struct
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);
	}
}
