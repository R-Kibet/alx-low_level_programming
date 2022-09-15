#include <stdio.h>

/**
 * main - start of the program
 *
 * Return: 0
 */

int main(void)
{
	long int a, i;

	a = 612852475143;

	for (i = 3 ; i < a ; i++)
	{
		if (a % i == 0)
		{
			a /= i;
			i--;
		}
	}
	printf("%ld\n", i);
	return (0);
}


