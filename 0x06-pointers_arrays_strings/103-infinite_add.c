#include "main.h"
/**
 * infinite_add - a function that adds two numbers.
 * @n1: first no.
 * @n2:second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k = 0;
	int carry = 0;
	int sum = 0;
	char tmp;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > size_r || j > size_r)
		return (0);
	r[size_r - 1] = '\0';
	i--;
	j--;
	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		if (k >= size_r - 1)
			return (0);
		r[k] = sum % 10 + '0';
		carry = sum / 10;
		i--;
		j--;
		k++;	}
	if (carry && k < size_r - 1)
	{
		r[k] = carry + '0';
		k++;	}
	if (k == size_r - 1)
		return (0);
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		tmp = r[i];
		r[i] = r[k - i - 1];
		r[k - i - 1] = tmp;	}
	return (r);
}
