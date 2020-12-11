#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints out of the elements of list_t
 * @h: list to prtinf from
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
