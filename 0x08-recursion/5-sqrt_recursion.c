/**
 * _sqrt_examine - a helper function that returns the
 * natural square root of a number.
 * @n: number
 * @i: current guess
 * @k: upper bound
 * Return: natural square root of n
 */
int _sqrt_examine(int n, int i, int k)
{
	int mid;

	if (k >= i)
	{
		mid = (i + k) / 2;
		if (mid * mid == n)
		{
			return (mid);
		}
		else if (mid * mid > n)
		{
			return (_sqrt_examine(n, i, mid - 1));
		}
		else
		{
			return (_sqrt_examine(n, mid + 1, k));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: the number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_examine(n, 1, n));
}

