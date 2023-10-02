#include "hash_tables.h"

/**
 * shash_table_create - Fx creates a sorted hash table
 * @size: The size of new sorted array(hash table)
 * Return: pointer to the new hash table
 * OR NULL if error
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htble;
	unsigned long int y;

	htble = malloc(sizeof(shash_table_t));
	if (htble == NULL)
		return (NULL);

	htble->size = size;
	htble->array = malloc(sizeof(shash_node_t *) * size);
	if (htble->array == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		htble->array[y] = NULL;
	htble->shead = NULL;
	htble->stail = NULL;

	return (htble);
}

/**
 * shash_table_set - Fx adds items to a sorted #table
 * @ht: points to the sorted hash table
 * @key: keyindex of the item
 * @value: pair value of the key
 *
 * Return: 1 if success, 0 if failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *neu, *temmp;
	char *value_cpy1;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cpy1 = strdup(value);
	if (value_cpy1 == NULL)
		return (0);

	position = key_index((const unsigned char *)key, ht->size);
	temmp = ht->shead;
	while (temmp)
	{
		if (strcmp(temmp->key, key) == 0)
		{
			free(temmp->value);
			temmp->value = value_cpy1;
			return (1);
		}
		temmp = temmp->snext;
	}

	neu = malloc(sizeof(shash_node_t));
	if (neu == NULL)
	{
		free(value_cpy1);
		return (0);
	}
	neu->key = strdup(key);
	if (neu->key == NULL)
	{
		free(value_cpy1);
		free(neu);
		return (0);
	}
	neu->value = value_cpy1;
	neu->next = ht->array[position];
	ht->array[position] = neu;

	if (ht->shead == NULL)
	{
		neu->sprev = NULL;
		neu->snext = NULL;
		ht->shead = neu;
		ht->stail = neu;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		neu->sprev = NULL;
		neu->snext = ht->shead;
		ht->shead->sprev = neu;
		ht->shead = neu;
	}
	else
	{
		temmp = ht->shead;
		while (temmp->snext != NULL && strcmp(temmp->snext->key, key) < 0)
			temmp = temmp->snext;
		neu->sprev = temmp;
		neu->snext = temmp->snext;
		if (temmp->snext == NULL)
			ht->stail = neu;
		else
			temmp->snext->sprev = neu;
		temmp->snext = neu;
	}

	return (1);
}

/**
 * shash_table_get - Fx retrieves value of given key a sorted #table
 * @ht: points to the sorted hash table
 * @key: keyindex of item from #table
 *
 * Return: value of key OR NULL if != key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *keynode;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	keynode = ht->shead;
	while (keynode != NULL && strcmp(keynode->key, key) != 0)
		keynode = keynode->snext;

	return ((keynode == NULL) ? NULL : keynode->value);
}

/**
 * shash_table_print - Fx prints a sorted #table in order.
 * @ht: points to sorted #table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *keynode;

	if (ht == NULL)
		return;

	keynode = ht->shead;
	printf("{");
	while (keynode != NULL)
	{
		printf("'%s': '%s'", keynode->key, keynode->value);
		keynode = keynode->snext;
		if (keynode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Fx prints a sorted #table in reverse order
 * @ht: points to sorted #table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *keynode;

	if (ht == NULL)
		return;

	keynode = ht->stail;
	printf("{");
	while (keynode != NULL)
	{
		printf("'%s': '%s'", keynode->key, keynode->value);
		keynode = keynode->sprev;
		if (keynode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Fx deletes a sorted #table
 * @ht: points to sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *headkey = ht;
	shash_node_t *keynode, *temmp;

	if (ht == NULL)
		return;

	keynode = ht->shead;
	while (keynode)
	{
		temmp = keynode->snext;
		free(keynode->key);
		free(keynode->value);
		free(keynode);
		keynode = temmp;
	}

	free(headkey->array);
	free(headkey);
}
