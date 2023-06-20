#include "main.h"
/**
 * main - Entry point
 *
 * Description: print the alphabet, in lowercase, followed by
 * a new line using _putchar()
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char m;
	for (m = 'a'; m < 'z'; m++ )
	{
		_putchar(m);
	}
	_putchar('\n');
	return (0);
}
