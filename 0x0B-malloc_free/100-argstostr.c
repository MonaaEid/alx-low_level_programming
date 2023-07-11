#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number od arguments
 * @av: strings
 * Return: Null or the pointer to new array
 *
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	int len = 0;
	char *new_arr;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	new_arr = malloc(len * sizeof(char));
	if (new_arr == 0)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new_arr[len] = av[i][j];
			len++;
		}
		new_arr[len] = '\n';
		len++;
	}
	new_arr[len] = '\0';
	return (new_arr);
}
