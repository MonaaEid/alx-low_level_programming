#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

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
