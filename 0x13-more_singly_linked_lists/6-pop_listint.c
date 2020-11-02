#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node and returns its value
 * @head: list to modify
 * Return: vlaue of head
 */
int pop_listint(listint_t **head)
{
	listint_t *newhead, *tmphead;
	int result;

	tmphead = *head;
	if (tmphead == NULL)
		return (0);
	result = tmphead->n;
	newhead = tmphead->next;
	free(tmphead);
	*head = newhead;
     	return (result);
}
