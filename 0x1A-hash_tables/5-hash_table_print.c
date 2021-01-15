#include "hash_tables.h"

/**
 * hash_table_print - prints out all elements of a has table
 * @ht: the table input
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, comma = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			if (ht->array[i]->next != NULL)
				while (ht->array[i]->next != NULL)
				{
					printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
					ht->array[i]->next = ht->array[i];
				}
			comma = 1;
		}
	printf("}\n");
}
