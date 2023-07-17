#include <stdio.h>
#include <string.h>
/**
 * main -  a program that prints the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{
	char fileName[10];

	strcpy(fileName, __FILE__);
	printf("%s\n", fileName);
	return (0);
}
