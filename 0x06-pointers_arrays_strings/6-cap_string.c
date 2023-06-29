#include <ctype.h>
#include "main.h"
/**
 * cap_string -  a function that capitalizes all words of a string.
 * @str: is the String
 * Return: Always 0 (Success)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
				str[i - 1] == '\n')
		{
			str[i] = toupper(str[i]);
		}
	}
	return (str);

}
