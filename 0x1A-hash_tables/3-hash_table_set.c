#include "hash_tables.h"

/**
 * hash_table_set - adds element to table
 * @ht: the table input
 * @key: the key to insert at index
 * @value: the value to put into node
 * Return: 1 if succesful, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *newnode, *current;

	if (ht == NULL || key == NULL ||
		ht->size == 0 || ht->array == NULL || key[0] == '\0')
		return (0);
	index = hash_djb2((unsigned char *)key) % ht->size;
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = newnode;
	else
	{
		current = ht->array[index];
		for (; current != NULL; current = current->next)
			if (strcmp(current->key, key) == 0)
			{
				free(current->value);
				current->value = strdup(value);
				free(newnode->key);
				free(newnode->value);
				free(newnode);
				return (1);
			}
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	return (1);
}
