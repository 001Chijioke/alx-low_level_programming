#include <stdout.h>
#include "main.h"

/**
 * main - prints its own name
 * @argc: counts the argument
 * @argv: the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[]);
	return (0);
}
