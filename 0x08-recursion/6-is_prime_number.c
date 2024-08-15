/**
 * is_prime_number - return 1 if the input integer is a prime number,.
 * @n: contains a number
 * Return: square root.
 */

int is_prime_number(int n)
{
	if ((n % 2) == 0 || n < 0 || n == 1)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
