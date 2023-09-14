#include "hash_tables.h"

/**
 * hash_table_create - Fx creates a hash table
 * @size: The size of the array(hashtable)
 *
 * Return: pointer to the new hash table
 * OR NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *fhasht;
	unsigned long int y;

	fhasht = malloc(sizeof(hash_table_t));
	if (fhasht == NULL)
		return (NULL);

	fhasht->size = size;
	fhasht->array = malloc(sizeof(hash_node_t *) * size);
	if (fhasht->array == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		fhasht->array[y] = NULL;

	return (fhasht);
}
