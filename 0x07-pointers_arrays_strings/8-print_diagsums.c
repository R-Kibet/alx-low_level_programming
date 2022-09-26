#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals
 *
 * @a: pointer to the array
 * @size: size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			if (i == j)
			{
				s1 += *((a + i * size) + j);
			}
			if (i + j == size - 1)
			{
				s2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", s1, s2);
}
