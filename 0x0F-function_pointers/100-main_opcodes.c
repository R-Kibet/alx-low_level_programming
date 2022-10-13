#include "3-calc.h"

/**
 * main - program that prints opcodes
 *
 * @argc: count
 * @argv: vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != j - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
