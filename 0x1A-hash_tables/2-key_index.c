#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: long int variable
 * @size: const unsigned char pointer
 * Return: an unsigned long int value that represents the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
