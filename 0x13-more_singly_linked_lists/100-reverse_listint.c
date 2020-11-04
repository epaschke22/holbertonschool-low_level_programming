#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses the list order
 * @head: input list
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *next;

	temp = NULL;
	next = *head;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = temp;
		temp = (*head);
		(*head) = next;
	}
	*head = temp;
	return (*head);
}
