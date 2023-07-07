#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description: a program that adds positive numbers
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
