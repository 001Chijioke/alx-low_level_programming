#include "main.h"

/**
 * _pow_recursion - computes the power of a number
 * @x: the base number
 * @y: the power
 * Return: the power of the number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
