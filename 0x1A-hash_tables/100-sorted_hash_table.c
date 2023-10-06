#include "hash_tables.h"
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * ,or NULL if something went wrong
 */
hash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;
	/*printf("%p", (void *) ht);*/
	/*free(ht);*/
	return (ht);
}

/**
 * shash_table_set - function that adds an element to the hash table.
 * @ht: a pointer to the hash table
 * @key: const char pointer
 * @value: const char pointer
 * Return: 1 if it succeeds and 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;

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
	node = malloc(sizeof(shash_node_t));
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


/**
 * shash_table_get - function that retrieves a value associated with a key.
 * @ht: a pointer to the hash table
 * @key: const char pointer
 * Return: the value associated with the element if it exists, or NULL
 */
char *shash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

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

/**
 * shash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node;

	/*unsigned char comma_flag = 0;*/

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->next != NULL)
			{
				printf(", ");
			}
			node = node->next;
		}

		if (i != ht->size - 1 && ht->array[i + 1] != NULL)
			printf(", ");
	}
	printf("}\n");
}


/**
 * shash_table_delete - function that deletes a hash table.
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		shash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			shash_node_t *temp = node;

			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    if (ht == NULL)
        return;

    printf("{");
    shash_node_t *node = ht->stail;
    while (node != NULL)
    {
        printf("'%s': '%s'", node->key, node->value);
        if (node->sprev != NULL)
            printf(", ");
        node = node->sprev;
    }
    printf("}\n");
}