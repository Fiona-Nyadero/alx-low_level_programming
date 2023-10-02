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
 * insert_sorted - fx inserts new node to linked list
 * @ht: points to sorted hash table
 * @new_node: node to insert
 */
void insert_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *curr = ht->shead;

	if (curr == NULL)
	{

		ht->shead = ht->stail = new_node;
		new_node->snext = new_node->sprev = NULL;
		return;
	}

	while (curr)
	{

		if (strcmp(new_node->key, curr->key) < 0)
		{
			new_node->snext = curr;
			new_node->sprev = curr->sprev;

			if (!curr->sprev)
				ht->shead = new_node;
			else
				curr->sprev->snext = new_node;

			curr->sprev = new_node;
			return;
		}
		curr = curr->snext;
	}

	new_node->sprev = ht->stail;
	new_node->snext = ht->stail->snext;
	ht->stail->snext = new_node;
	ht->stail = new_node;
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
	unsigned long int position = 0;
	shash_node_t *buff, *neu_node;

	if (!ht || !key || !*key || !value)
		return (0);

	position = key_index((const unsigned char *)key, ht->size);
	buff = ht->array[position];

	while (buff)
	{
		if (!strcmp(key, buff->key))
		{
			free(buff->value);
			buff->value = strdup(value);
			return (buff->value ? 1 : 0);
		}
		buff = buff->next;
	}

	neu_node = calloc(1, sizeof(shash_node_t));
	if (neu_node == NULL)
		return (0);

	neu_node->key = strdup(key);
	neu_node->value = strdup(value);

	if (!neu_node->key || !neu_node->value)
	{
		free(neu_node->key);
		free(neu_node->value);
		free(neu_node);
		return (0);
	}

	neu_node->next = ht->array[position];
	ht->array[position] = neu_node;
	insert_sorted(ht, neu_node);
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
