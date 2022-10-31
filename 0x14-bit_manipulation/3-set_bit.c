#include "main.h"

/**
 * set_bit - set bit value to 1 at a given index
 * @n: pointer to integer
 * @index: bit position
 * Return: 1 / -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	/* set at an  index 1 << index */
	*n = (*n | 1 << index);

	return (1);
}
