#include <stdio.h>

/**
 * main - entry check whether a number is divisible 3/5
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0 ; i < 1024 ; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
