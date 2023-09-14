#include "hash_tables.h"

/**
 * hash_table_set - Fx adds items to #table.
 * @ht: points to the hash table
 * @key: keyindex of the item
 * @value: pair value of the key
 *
 * Return: 1 if success, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newkey;
	char *value_cpy;
	unsigned long int postition, y;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	postition = key_index((const unsigned char *)key, ht->size);
	for (y = postition; ht->array[y]; y++)
	{
		if (strcmp(ht->array[y]->key, key) == 0)
		{
			free(ht->array[y]->value);
			ht->array[y]->value = value_cpy;
			return (1);
		}
	}

	newkey = malloc(sizeof(hash_node_t));
	if (newkey == NULL)
	{
		free(value_cpy);
		return (0);
	}
	newkey->key = strdup(key);
	if (newkey->key == NULL)
	{
		free(newkey);
		return (0);
	}
	newkey->value = value_cpy;
	newkey->next = ht->array[postition];
	ht->array[postition] = newkey;

	return (1);
}
