#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - returns the nth node of a list
 * @head: list to look through
 * @idx: the place to add the node
 * @n: the value to add to the new node
 * Return: listint node added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new, *tmphead;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	tmphead = *head;
	while (tmphead != NULL)
	{
		if (count == idx)
		{
			temp = tmphead->next;
			tmphead->next = new;
			new->next = temp;
			return (tmphead);
		}
		count++;
		tmphead = tmphead->next;
	}
	return (NULL);
}
