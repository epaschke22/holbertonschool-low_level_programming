#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data of a list
 * @head: list with ints to add
 * Return: number the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
