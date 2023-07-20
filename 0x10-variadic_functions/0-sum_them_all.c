#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: arguments
 * Return: sum of given numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
