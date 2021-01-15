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
	hash_node_t *newnode;

	if (ht == NULL || key == NULL)
		return (1);
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
		if (strcmp(ht->array[index]->key, key) == 0)
			ht->array[index]->value = strdup(value);
		else
		{
			newnode->next = ht->array[index];
			ht->array[index] = newnode;
		}
	}
	return (1);
}
