#include "main.h"

/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description: a program that multiplies two numbers.
 * Return: Always 0 (Success);
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}
	else if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	return (0);
}
