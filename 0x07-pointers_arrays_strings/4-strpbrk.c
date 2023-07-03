#include "main.h"
/**
 * _strpbrk -  a function that searches a string for any of a set of bytes.
 * @s: the main string that we will search in.
 * @accept: the string we will compare it with s
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}

		}
	}
	return (NULL);
}
