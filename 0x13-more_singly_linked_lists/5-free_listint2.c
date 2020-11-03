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
	listint_t *temp, *tmphead;

	if (head != NULL)
	{
		tmphead = *head;
		while (tmphead != NULL)
		{
			temp = tmphead->next;
			free(tmphead);
			tmphead = temp;
		}
		*head = NULL;
	}
}
