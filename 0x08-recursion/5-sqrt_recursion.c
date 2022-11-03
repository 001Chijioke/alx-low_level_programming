#include "main.h"

/**
 * _eval - computes function square root
 * @i: integer
 * @n: integer
 * Return: squareroot
 */
int _eval(int i, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (i * i < n)
	{
		return (_eval(i + 1, n));
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (-1);
	}
	return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 * @n: the input number
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
	{
		return (_eval(i, n));
	}
}
