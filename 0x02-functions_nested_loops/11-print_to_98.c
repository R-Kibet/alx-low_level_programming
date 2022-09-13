#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * @n: int n
 *
 * Return: 0
 */

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n ; m < 98 ; m++)
		{
			printf("%i, ", m);
		}
	}
	else
	{
		for (m = n ; m > 98 ; m--)
		{
			printf("%i, ", m);
		}
	}
	printf("98\n");
}
