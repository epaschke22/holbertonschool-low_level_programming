#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in linked
 * @h: list to prtinf from
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * free_listint2 - frees memory of list and sets head to null
 * @head: list to free
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *tmphead;
	int len = 0;

	tmphead = *head;
	len = (listint_len(tmphead));

	if (len == 0)
		return;
	while (tmphead != NULL)
	{
		temp = tmphead->next;
		free(tmphead);
		tmphead = temp;
	}
	*head = NULL;
}
