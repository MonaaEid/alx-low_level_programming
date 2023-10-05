#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: a pointer to the hash table
 * @key: const char pointer
 * @value: const char pointer
 * Return: 1 if it succeeds and 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);	}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (0);	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
