#include "function_pointers.h"

/**
 * int_index - searches for integers
 *
 * @array: pointer to array of int
 * @size: number of elements in array
 * @cmp: function pointer
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	else
		return (-1);
	return (0);
}
