#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	str = malloc((len1 + n + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	memcpy(str, s1, len1);
	memcpy(str + len1, s2, n);
	str[len1 + n] = '\0';

	return (str);
}
