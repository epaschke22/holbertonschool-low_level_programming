#include "hash_tables.h"

/**
 * hash_table_delete - deletes a whole hash table
 * @ht: the table input
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
    hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
    {
        if (ht->array[i])
            while (ht->array[i] != NULL)
            {
                temp = ht->array[i];
                ht->array[i] = ht->array[i]->next;
                free(temp->key);
                free(temp->value);
                free(temp);
            }
    }
    free(ht->array);
    free(ht);
}