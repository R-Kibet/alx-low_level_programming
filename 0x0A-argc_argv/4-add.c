#include "main.h"

/**
 * main - program that adds positive  numbers
 *
 * @argc: count
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, r;

	r = 0;

	for (i = 0 ; i < argc ; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			j = strtol(argv[i], NULL, 10);
			r = r + j;
		}
	}
	printf("%d\n", r);
	return (0);
}
