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

	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
