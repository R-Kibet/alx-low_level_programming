#include "main.h"

/**
 * main - multipliation of 2 numbers
 *
 * @argc: count
 * @argv: string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, r, x;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		r = 1;
		for (i = 1 ; i < argc ; i++)
		{
			x = strtol(argv[i], NULL, 10);
			r = r * x;
		}
		printf("%d\n", r);
	}
	return (0);
}
