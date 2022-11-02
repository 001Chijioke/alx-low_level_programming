#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: the number whose factorial is to be calculated
 * Return: the factorial of a number
 */
int factorial(int n)
{
	int res = n;

	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	return (factorial);
}
