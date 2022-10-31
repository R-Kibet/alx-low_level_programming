#include "main.h"

/**
 * clear_bit - set value of bit to zero
 * @n: pointer to bit
 * @index: index of the array
 * Description: logic to clear n = n & ~ (1 << pos)
 * Return: 1 / -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;

	*n = *n & ~i;

	return (1);
}
