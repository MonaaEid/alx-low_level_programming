/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	int i;

	if (i == 1)
        return 1;
    else
    {
        if (n % i == 0)
            return 0;
        else
            return is_prime_number(n, i - 1);
    }
}
