#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array to search in
 * @size: the size of the array
 * @cmp: pointer to compare values
 * Return: -1 if no value matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
