#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: is the String
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);

}
