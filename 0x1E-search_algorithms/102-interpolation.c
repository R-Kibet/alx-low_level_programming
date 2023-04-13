#include "search_algos.h"

/**
 * interpolation_search - search alg
 * @array: pointer to first digit of array
 * @size: size of array
 * @value: key value
 * Return: value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l;
	int p, x, y;

	l = 0;
	h = size - 1;

	x = array[l];
	y = array[h];

	if (array == NULL || size == 0)
		return (-1);

	while (size)
	{
		p = l + ((h - l) / (y - x)) * (value - x);
		printf("Value checked array[%d]", p);

		if ((size_t)p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return (p);

		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;

		if (l == h)
			break;
	}
	return (-1);
}
