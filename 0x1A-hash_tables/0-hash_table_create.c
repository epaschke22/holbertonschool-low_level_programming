#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the table
 * Return: newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	ht->array = array;
	for (i = 0; i < size; i++)
		array[i] = NULL;
	return (ht);
}
