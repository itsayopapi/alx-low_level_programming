#include <stdio.h>

/**
 * int_index - a function that searches for an integer.
 * @array: An array.
 * @size: Size of array.
 * @cmp: Function.
 * Return: the index of the first match else return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
		{
			return (x);
		}
	}

	return (-1);
}
