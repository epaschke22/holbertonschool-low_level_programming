#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees memory of each item in a list
 * @head: list to free
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
