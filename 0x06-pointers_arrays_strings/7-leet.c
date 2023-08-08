#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 * @str:vhjghgj
 * Return: modified string
 */
char *leet(char *str)
{
	char *p = str;
	char *table[] = {"4", "3", "0", "7", "1"};
	char *letters[] = {"aA", "eE", "oO", "tT", "lL"};
	int i, j;

	for (i = 0; i < 5; i++)
	{
		char *letter = letters[i];
		char *encoded = table[i];

		for (j = 0; p[j] != '\0'; j++)
		{
			if (p[j] == letter[0] || p[j] == letter[1])
			{
				p[j] = encoded[0];
			}
		}
	}
	return (str);
}
