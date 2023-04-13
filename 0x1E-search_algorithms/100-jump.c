#include "search_algos.h"

/**
 * jump_search- jump search alg
 * @array: pointer to first array
 * @size: size of array
 * @value: key value
 * Return: value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, m, k, p;

	if (array == NULL || size == 0)
		return (-1);

	m = sqrt(size);
	k = 0;
	p = i = 0;

	do {
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
		k++;
		p = i;
		i = k * m;
	} while (i < size && array[i] < value);

	printf("Value found between indexes [%ld] and [%ld]\n", p, i);

	for (; p <= i && p < size; p++)
	{
		printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		if (array[p] == value)
			return (p);
	}

	return (-1);
}
