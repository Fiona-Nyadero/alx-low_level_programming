#include "hash_tables.h"

/**
 * hash_table_print - fx prints a #table
 * @ht: pointer to the #table
 *
 * Return: Always 0
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *keynode;
	unsigned long int y;
	unsigned char comma_tst = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (y = 0; y < ht->size; y++)
	{
		if (ht->array[y] != NULL)
		{
			if (comma_tst == 1)
				printf(", ");

			keynode = ht->array[y];
			while (keynode != NULL)
			{
				printf("'%s': '%s'", keynode->key,
						keynode->value);
				keynode = keynode->next;
				if (keynode != NULL)
					printf(", ");
			}
			comma_tst = 1;
		}
	}
	printf("}\n");
}
