#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @chr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _putchar(char *chr)
{
	return (write(1, &chr, 1));
}
#endif /*MAIN_H_INCLUDED*/
