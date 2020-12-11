#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: list to look through
 * @index: the node index
 * Return: listint_t node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
