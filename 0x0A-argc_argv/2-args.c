#include "main.h"

/**
 * main - Entry point
 * @argc: stores the number of command-line arguments
 * @argv: array of character pointers listing all the arguments.
 * Description: a program that prints all arguments it receives.
 *
 * Return: Always 0 (Success);
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
