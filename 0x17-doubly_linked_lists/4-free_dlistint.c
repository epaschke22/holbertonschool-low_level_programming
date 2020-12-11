#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees memory of each item in a list
 * @head: list to free
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
