#include "hash_tables.h"

/**
 * hash_table_print - prints out all elements of a has table
 * @ht: the table input
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, comma = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
			{
				node = node->next;
				while (node->next != NULL)
				{
					printf(", '%s': '%s'", node->key, node->value);
					node = node->next;
				}
			}
			comma = 1;
		}
	}
	printf("}\n");
}
