#include <stdio.h>
/**
 * main -Entry point
 *
 * Description: combination of 3 digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				if (i != j && i != k &&  j != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == 55 && j == 56 && k == 57)
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
	}
	putchar('\n');
	return (0);
}
