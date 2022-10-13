#include "function_pointers.h"

/**
 * array_iterator - executes a function given each element
 *
 * @array: array pointer
 * @size: size of arrt
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
