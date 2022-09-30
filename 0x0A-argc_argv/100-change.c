#include "main.h"

/**
 * main - prints the minimum number of
 * coins to make change for an amount of money
 * @argc: amount of arguement
 * @argv: an array of inputs from argc
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int n, j = 0;

	if (argc == 1 || argc > 2)
	{
		return (printf("Error\n"), 1);
	}

	n = atoi(argv[1]);
	while (n > 0)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		j += 1;
	}
	printf("%d\n", j);
	return (0);
}
