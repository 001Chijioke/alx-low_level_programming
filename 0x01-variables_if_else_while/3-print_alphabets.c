#include <stdio.h>
/**
 * main - prints the alphabet both in uppercase
 * and in lowercase
 * Return: returns zero if no error exist
 */
int main(void)
{
	char A;
	char le;

	for (A = 'a'; A <= 'z'; A++)
		putchar(A);
	for (le = 'A'; le <= 'Z'; le++)
		putchar(le);
	putchar('\n');
	return (0);
}
