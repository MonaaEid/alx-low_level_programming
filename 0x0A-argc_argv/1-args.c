#include "main.h"
/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description: a program that prints the number of arguments passed into it.
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("%s", argv[0]);
	return (0);
}
