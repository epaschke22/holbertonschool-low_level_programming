#include "hash_tables.h"

/**
 * hash_table_get - retrieves element from has table
 * @ht: the table input
 * @key: the key to insert at index
 * Return: value of node at index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;


	if (strcmp("", (char *)key) == 0 || ht == NULL)
		return (NULL);
	node = ht->array[hash_djb2((unsigned char *)key) % ht->size];
	if (node == NULL)
		return (NULL);
	if (strcmp(node->key, (char *)key) == 0)
		return (node->value);
	if (node->next != NULL)
		while (node->next != NULL)
		{
			if (strcmp(node->key, (char *)key) == 0)
				return (node->value);
			node = node->next;
		}
	return (NULL);
}
