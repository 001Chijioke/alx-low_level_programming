#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c: is the input character
 * Return:return 1 if the character is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
