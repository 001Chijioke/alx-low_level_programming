#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: counts the number of argument
 * @argv: the arguments
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
