#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: location of int variable
 * @b: number of bytes
 * @n: unsigned variable
 * Return: a pointer to the memory area s
 */
char *_strstr(char *haystack, char *needle)
{
	int i, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (k = 0; needle[k] != '\0'; k++)
		{
			if (haystack[i] == needle[k])
				

		}
	}
	return (NULL);
}
