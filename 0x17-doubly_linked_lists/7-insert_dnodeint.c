#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in linked
 * @h: list to prtinf from
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * insert_dnodeint_at_index - returns the nth node of a list
 * @h: list to look through
 * @idx: the place to add the node
 * @n: the value to add to the new node
 * Return: listint node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmphead;
	unsigned int len, count = 0;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	tmphead = *h;
	len = dlistint_len(tmphead);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == len)
		return (add_dnodeint_end(h, n));
	while (tmphead != NULL)
	{
		if (count == idx)
		{
			printf("true: %d\n", count);
			new->next = tmphead;
			new->prev = tmphead->prev;
			tmphead->prev->next = new;
			tmphead->prev = new;
			return (new);
		}
		printf("place: %d\n", count);
		count++;
		tmphead = tmphead->next;
	}
	free(new);
	return (NULL);
}
