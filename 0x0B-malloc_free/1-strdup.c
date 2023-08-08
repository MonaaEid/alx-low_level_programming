#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter.
 * @str: a string that will be duplicated
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dupl;


	if (str == NULL)
		return (NULL);

	dupl = malloc(strlen(str) + 1);

	if (dupl == NULL)
		return (NULL);
	strcpy(dupl, str);

	return (dupl);
}
