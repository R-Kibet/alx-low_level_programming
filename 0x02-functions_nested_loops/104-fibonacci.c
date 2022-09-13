#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long j, k, l;
	unsigned long a, b, c, e;

	i = 0;
	j = 0;
	k = 1;
	for (i = 1; i <= 91; i++)
	{
		l = j + k;
		j = k;
		k = l;
		printf("%lu, ", l);
	}
	a = j % 1000;
	j = j / 1000;
	b = k % 1000;
	k = k / 1000;
	while (i <= 98)
	{
		e = (a + b) / 1000;
		c = (a + b) - e * 1000;
		l = (j + k) + e;
		a = b;
		b = c;
		j = k;
		k = l;
		if (c >= 100)
			printf("%lu%lu", l, c);
		else
			printf("%lu0%lu", l, c);
		if (i != 98)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
