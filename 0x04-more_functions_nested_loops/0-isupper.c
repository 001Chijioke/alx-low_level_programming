#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked
 * Return: returns 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
}
