#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints out of the elements of list_t
 * @h: list to prtinf from
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
