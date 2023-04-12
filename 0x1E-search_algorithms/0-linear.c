#include "search_algos.h"

/**
 * linear_search - linear search algorith
 * @array: pointer to 1st element of arrsy
 * @size: size of arra
 * @value: digit being searched
 * Return: value and index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	if (i == size)
		return (-1);
	return (0);
}
