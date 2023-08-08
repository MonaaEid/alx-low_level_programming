#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: new memory area
 * @src: source for old memory area
 * @n: numbers of copies
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
