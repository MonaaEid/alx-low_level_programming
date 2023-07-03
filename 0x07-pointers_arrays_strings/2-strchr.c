#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string we will search in
 * @c: the character we will search for
 * Return: a pointer to the first occurrence of the character c in the string
 * s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int *p;

	while (c != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
		else
		{
			return (NULL);
		}
		i++;
	}
}
