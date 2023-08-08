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
	int (*op_func)(int, int);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	/*int (*op_func)(int, int) = get_op_func(op);*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(op);
	result = op_func(a, b);
	printf("%d\n", result);
	return (0);
}
