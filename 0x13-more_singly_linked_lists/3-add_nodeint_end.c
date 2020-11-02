#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds node to end a list
 * @head: pointer to head of list
 * @n: element to put in new node
 * Return: adress to element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (*head);
}
