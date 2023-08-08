#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description: a program that multiplies two numbers.
 * Return: Always 0 (Success);
 */

int main(int argc, char *argv[])
{
	int mul, m, n;

	if (argc == 3)
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		mul = m * n;
		printf("%d\n", mul);
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
