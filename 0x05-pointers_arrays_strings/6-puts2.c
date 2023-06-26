#include "main.h"
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * in reverse, followed by a new line
 * @str: is the String
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
}
