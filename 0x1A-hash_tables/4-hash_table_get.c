#include "hash_tables.h"

/**
 * hash_table_get - Fx retrieves value of given key
 * @ht: points to the hash table
 * @key: keyindex of item from #table.
 *
 * Return: return value of key OR NULL if != key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *keynode;
	unsigned long int postition;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	postition = key_index((const unsigned char *)key, ht->size);
	if (postition >= ht->size)
		return (NULL);

	keynode = ht->array[postition];
	while (keynode && strcmp(keynode->key, key) != 0)
		keynode = keynode->next;

	return ((keynode == NULL) ? NULL : keynode->value);
}
