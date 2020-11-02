#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees memory of list and sets head to null
 * @head: list to free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *thead;

	thead = *head;
	while (thead != NULL)
	{
		temp = thead->next;
		free(thead);
		thead = temp;
	}
	*head = NULL;
}
