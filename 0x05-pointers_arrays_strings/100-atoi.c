#include "main.h"
#include <limits.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string that will be converted to intger
 * Return: f_res * (sign)
 */
int _atoi(char *s)
{
	int sign = 1;
	int f_res = 0;
	int k = 0;
	int dIM = INT_MAX / 10;

	if (s[k] == '-')
	{
		sign = -1;
		k++;
	}
	while (s[k] != '\0')
	{
		if (s[k] >= '0' && s[k] <= '9')
		{
			if (f_res > dIM || (f_res == dIM && s[k] - '0' > INT_MAX % 10))
			{
				if (sign == -1)
					return (INT_MIN);
				else
					return (INT_MAX);
			}
			f_res = f_res * 10 + s[k] - '0';
		}
		else
			break;
		k++;
	}
	return (f_res * sign);
}
