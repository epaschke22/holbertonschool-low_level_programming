#include "hash_tables.h"

/**
 * hash_table_print - prints out all elements of a has table
 * @ht: the table input
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, comma = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;
		current = ht->array[index];
		while (1)
		{
			if (comma == 1)
				printf(", ");
			printf("\'%s\': \'%s\'", current->key, current->value);
			comma = 1;
			if (current->next == NULL)
				break;
			current = current->next;
		}
	}
	printf("}\n");
}
