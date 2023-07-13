#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _isdigit - Checks if a character is a digit.
 * @c: The character to be checked.
 *
 * Return: If c is a digit - 1.
 *         If c is not a digit - 0.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to be computed.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
/**
 * mul - Multiplies two positive numbers.
 * @num1: The first number to be multiplied.
 * @num2: The second number to be multiplied.
 *
 * Return: A pointer to the product of the two numbers as a string.
 */
char *mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, k;
	int carry = 0;
	int sum = 0;
	char *result;

	result = malloc(len1 + len2 + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			sum = (num1[i] - '0') * (num2[j] - '0') +
				(result[i + j + 1] - '0') + carry;
			carry = sum / 10;

			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] += carry;
	}

	for (k = 0; result[k] == '0'; k++)
		;

	if (k == len1 + len2)
		k--;

	for (i = k, j = 0; i < len1 + len2; i++, j++)
		result[j] = result[i];

	result[j] = '\0';

	return (result);
}
/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments passed to the program.
 *
 * Return: Always returns 0.
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *product;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	while (*num1)
	{
		if (!_isdigit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}

	while (*num2)
	{
		if (!_isdigit(*num2))
		{
			printf("Errorr\n");
			return (98);
		}
		num2++;
	}

	product = mul(argv[1], argv[2]);
	printf("%s\n", product);
	free(product);

	return (0);
}

