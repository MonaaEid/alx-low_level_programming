#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: is the String
 * Return: s (string)
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		*s += s[i];
		i--;
	}
	return (s);
}
