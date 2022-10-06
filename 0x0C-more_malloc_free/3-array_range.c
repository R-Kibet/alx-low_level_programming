#include "main.h"

/**
 * array_range - creates an arry of integers
 *
 * @min: minimum value
 * @max: max value
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min;

	ptr = malloc(sizeof(int) * (j + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max ; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
