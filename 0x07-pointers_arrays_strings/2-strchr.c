#include "main.h"

/**
 * _strchr - locates a character
 * @s: the string we look through
 * @c: the character we look for
 * Return: a pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
