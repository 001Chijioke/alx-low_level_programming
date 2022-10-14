#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * This program generates random numbers and tells their value
 * Return: Usually returns 0 when true
 */
int main(void)
{/*main - marks the entry of a C code*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n );
	}
	else
	{
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			if (n == 0)
			{
				printf("%d is zero\n", n);
			}
		}
	}
	return (0);
}
