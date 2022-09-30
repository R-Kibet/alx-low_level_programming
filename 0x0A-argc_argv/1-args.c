#include "main.h"

/**
 * main - prints the count
 *
 * @argc: count
 * @argv: argument vector of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		*argv[i] = *argv[i];
	}
	printf("%d\n", (i - 1));
	return (0);
}
