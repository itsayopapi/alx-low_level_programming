#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - executes a functions given as a parameter
* @array: the array to iterate
* @size: the size of the array
* @action: a poiter to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
