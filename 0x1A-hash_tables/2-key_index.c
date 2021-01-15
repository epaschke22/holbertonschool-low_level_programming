#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the input key
 * @size: size of the table
 * Return: index from table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}