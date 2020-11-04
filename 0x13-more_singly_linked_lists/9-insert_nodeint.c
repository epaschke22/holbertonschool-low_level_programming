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
 * add_nodeint - adds node to beginning a list
 * @head: pointer to head of list
 * @n: element to put in new node
 * Return: adress to element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * add_nodeint_end2 - adds node to end a list
 * @head: pointer to head of list
 * @n: element to put in new node
 * Return: adress to element
 */
listint_t *add_nodeint_end2(listint_t **head, const int n)
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
	unsigned int len, count = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	tmphead = *head;
	len = listint_len(tmphead);
	if (idx == 0)
		return (add_nodeint(head, n));
	if (idx == len)
		return (add_nodeint_end2(head, n));
	if (idk > len)
		return (NULL);
	while (tmphead != NULL)
	{
		if (count == idx - 1)
		{
			temp = tmphead->next;
			tmphead->next = new;
			new->next = temp;
			return (new);
		}
		count++;
		tmphead = tmphead->next;
	}
	free(new);
	return (NULL);
}
