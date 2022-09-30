#include "main.h"

/**
 * main - print the its name
 *
 * @argc:  count elements in argv
 * @argv: aray of string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
