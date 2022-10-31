#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: pointer to the memory
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < n; index++)
	{
		memory[index] = value;
	}

	return (memory);
}
