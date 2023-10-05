#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: a pointer to the hash table
 * @key: const char pointer
 * Return: the value associated with the element if it exists, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
