#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: pointer to the memory
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * Return: A pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}
	return (s);
}
