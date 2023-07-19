#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: the numbers that will be used to operations
 * Description: a program that performs simple operations.
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 4)
	{
		printf("Usage: %s <operation> <a> <b>\n", argv[0]);
		return (1);
	}
	char *op = argv[1];

	a = atoi(argv[2]);
	b = atoi(argv[3]);
	int (*op_func)(int, int) = get_op_func(op);

	if (op_func == NULL)
	{
		printf("Invalid operation: %s\n", op);
		return (2);
	}
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
