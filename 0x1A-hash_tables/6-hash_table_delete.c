#include "hash_tables.h"

/**
 * hash_table_delete - Fx deletes a #table
 * @ht: points to #table
 *
 * Return: 0
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *headkey = ht;
	hash_node_t *keynode, *temp_keynode;
	unsigned long int y;

	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			keynode = ht->array[y];
			while (keynode != NULL)
			{
				temp_keynode = keynode->next;
				free(keynode->key);
				free(keynode->value);
				free(keynode);
				keynode = temp_keynode;
			}
		}
	}
	free(headkey->array);
	free(headkey);
}
