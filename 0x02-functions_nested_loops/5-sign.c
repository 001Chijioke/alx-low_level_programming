#include "main.h"
/**
 * print_sign - displays the sign of an integer
 * @n: is the input integer
 * Return: returns 1 if n is + and 0 if n is 0 and -1 if n -
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

