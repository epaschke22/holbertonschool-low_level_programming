#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints out of the elements of list_t
 * @h: list to prtinf from
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
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
