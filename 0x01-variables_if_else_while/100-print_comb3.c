#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: combination of 2 numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 48 ; i < 57 ; i++)
	{
		for (j = 49 ; j < 58 ; j++)
		{
			if (i != j && i < j)
			{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 56)
			{
				break;
			}
			else
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
