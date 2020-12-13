#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in linked
 * @h: list to prtinf from
 * Return: number of elements
 */
size_t listint_len(const dlistint_t *h)
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
 * remove_beginning - deletes the head node
 * @head: list to modify
 * Return: 1 on success
 */
int remove_beginning(dlistint_t **head)
{
	dlistint_t *newhead, *tmphead;

	tmphead = *head;
	if (tmphead == NULL)
		return (0);
	if (tmphead->next == NULL)
	{
		free(tmphead);
		*head = NULL;
		return (1);
	}
	newhead = tmphead->next;
	newhead->prev = NULL;
	free(tmphead);
	*head = newhead;
	return (1);
}

/**
 * remove_end - deletes the last node in list
 * @head: list to modify
 * Return: 1 if successful
 */
int remove_end(dlistint_t **head)
{
	dlistint_t *temp, *tmphead;
	int len = 0, i = 0;

	tmphead = *head;
	len = listint_len(tmphead);
	while (i < len - 2)
	{
		tmphead = tmphead->next;
		i++;
	}
	temp = tmphead->next;
	temp->prev = NULL;
	tmphead->next = NULL;
	free(temp);
	return (1);
}

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: list to look through
 * @index: the place to delete the node
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmphead, *freenode;
	unsigned int count = 0, len;

	if (head == NULL)
		return (-1);

	tmphead = *head;
	len = listint_len(tmphead);
	if (len == 0)
		return (-1);
	if (index == 0)
		return (remove_beginning(head));
	if (index == len - 1)
		return (remove_end(head));
	if (index == len)
		return (-1);
	while (tmphead != NULL)
	{
		if (count == index)
		{
			freenode = tmphead;
			freenode->prev->next = freenode->next;
			freenode->next->prev = freenode->prev;
			freenode->next = NULL;
			freenode->prev = NULL;
			free(freenode);
			return (1);
		}
		count++;
		tmphead = tmphead->next;
	}
	return (-1);
}
