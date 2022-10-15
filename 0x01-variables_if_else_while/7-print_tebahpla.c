#include <stdio.h>
/**
 * main - prints the alphabet in reverse order
 * Return: returns a value of zero
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
