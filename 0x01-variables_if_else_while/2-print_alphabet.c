#include <stdio.h>
/**
 * main - prints out the alphabet in
 * lowercase
 * Return: prints out zero if the code is without error
 */
int main(void)
{
	char A;

	for (A = 'a'; A <= 'z'; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
