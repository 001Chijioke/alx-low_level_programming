#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: contents to be copied
 * @to: string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
