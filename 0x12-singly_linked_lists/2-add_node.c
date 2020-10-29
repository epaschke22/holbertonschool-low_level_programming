#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node to beginning a list
 * @head: pointer to head of list
 * @str: element to put in new node
 * Return: adress to element
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
