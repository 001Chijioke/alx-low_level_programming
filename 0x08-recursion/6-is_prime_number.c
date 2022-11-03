#include "main.h"

/**
 * is_prime - determines whether a number is prime
 * @n: the number to be determined
 * @c: iterator
 * Return: 1 if n is a prime, 0 otherwise
 */
int is_prime(int n, int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - returns 1 if prime, 0 otherwise
 * @n: the number to be determined
 * Return: 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
