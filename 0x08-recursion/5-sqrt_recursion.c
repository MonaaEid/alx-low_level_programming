/**
 * _sqrt_examine - a helper function that returns the
 * natural square root of a number.
 * @n: number
 * @i: current guess
 * Return: natural square root of n
 */
int _sqrt_examine(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_examine(n, i + 1));
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
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_examine(n, 1));
}

