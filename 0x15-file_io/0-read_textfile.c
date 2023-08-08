#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp = fopen(filename, "r");
	char s;
	ssize_t printed = 0;

	if (!fp || !filename)
		return (0);
	while (((s = fgetc(fp)) != EOF) && printed < (ssize_t)letters)
	{
		write(1, &s, 1);
		printed++;
	}
	if (printed == 0 && letters != 0)
		return (0);
	fclose(fp);
	return (printed);
}
