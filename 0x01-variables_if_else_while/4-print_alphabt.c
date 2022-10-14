#include <stdio.h>
/**
 * main - displays all the letters of the alphabet
 * excluding q and e 
 * Return: returns a value of 0 if no error
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch = 'z'; ch++)
		if (ch == 'e' || ch == 'q')
			continue;
	putchar(ch);
	putchar('\n');
	return (0);
}
