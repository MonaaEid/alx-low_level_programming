#include "variadic_functions.h"
/**
 * print_all -  function that prints anything.
 *
 * @format: is a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *p = format;
	char *sep = "";

	va_start(args, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				printf("%c%s", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%d%s", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%f%s", sep, va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					if (s == NULL)
					{
						printf("%s(nil)", sep);
					}
					if (s != NULL)
					{
						printf("%s%s", sep, s);
					}
					break;
				}
		}
		sep = ", ";
		p++;
	}
	printf("\n");
	va_end(args);
}
