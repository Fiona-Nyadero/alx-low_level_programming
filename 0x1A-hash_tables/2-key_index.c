#include "hash_tables.h"

/**
 * key_index - gets the key of current #item
 * @key: key index
 * @size: size of the array of #table.
 *
 * Return: the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
