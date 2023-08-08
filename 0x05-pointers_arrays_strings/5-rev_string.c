#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: is the String
 * Return: s (string)
 */

void rev_string(char *s)
{
	int i =	0;
	int k = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (k < i)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		k++;
		i--;
	}
}
