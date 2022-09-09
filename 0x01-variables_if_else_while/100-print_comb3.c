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

	for (j = 48 ; j < 58 ; j++)
	{
		for (i = 48 ; i < 58 ; i++)
		{
			if (j != i && j < i)
			{
			putchar(j);
			putchar(i);
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
