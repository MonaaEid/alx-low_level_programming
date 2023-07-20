#include "variadic_functions.h"
/**
 * print_all -  function that prints anything.
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = ", ";
	char *s;
	int n = 0, i = 0;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n  == (i - 1))
		{
			sep = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				/*s = "(nil)";*/
				printf("(nil)");
			printf("%s%s", s, sep);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
