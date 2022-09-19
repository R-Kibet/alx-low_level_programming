#include "main.h"

/**
 * swap_int - Entry of program
 *
 * @a: int *a
 * @b: int *b
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
