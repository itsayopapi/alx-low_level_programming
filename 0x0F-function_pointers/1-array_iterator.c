#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * on each element of an array.
 * @array: Array.
 * @size: Size of the array.
 * @action: Function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
