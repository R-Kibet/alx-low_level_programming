#include <stdio.h>
/**
 * main - ENtry point
 *
 * Description: print out single numbers with , and space
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
