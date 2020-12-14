#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - returns the nth node of a list
 * @h: list to look through
 * @idx: the place to add the node
 * @n: the value to add to the new node
 * Return: listint node added
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmphead = *h;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (tmphead != NULL)
	{
		if (count == idx)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = tmphead;
			new->prev = tmphead->prev;
			tmphead->prev->next = new;
			tmphead->prev = new;
			return (new);
		}
		count++;
		tmphead = tmphead->next;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
