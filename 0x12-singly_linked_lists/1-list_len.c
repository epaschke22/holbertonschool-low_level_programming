#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in linked
 * @h: list to prtinf from
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
