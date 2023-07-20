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

	va_start(args, format);
	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					char *s = va_arg(args, char *);

					if (s == NULL)
					{
						printf("(nil)");
					}
					
						printf("%s", s);
					break;
				}
		}
		p++;
	}
	printf("\n");
	va_end(args);
}
