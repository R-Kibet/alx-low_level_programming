#include "main.h"

/**
 * binary_to_uint - converts binary to dec
 * @b: pointer to binary string
 * Return: dec
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int l, j;
	int i, t, dec;

	t = 0;
	dec = 1;

	l = strlen(b);
	j = l - 1;

	if (!b)
		return (0);
	for (i = j; i >= 0; i--)
	{
		if (b[i] == '1')
			t += dec;
		dec *= 2;
	}
	return (t);
}
