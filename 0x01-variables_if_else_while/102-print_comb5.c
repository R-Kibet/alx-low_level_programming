#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: compination of 2 digitz in ascending order
 *
 * Return: )
 */
int main(void)
{
	int i, e, g, h, q, t;

	for (h = 48 ; h < 58 ; h++)
	{
		for (g = 48 ; g < 58 ; g++)
		{
			for (e = 48 ; e < 58 ; e++)
			{
				for (i = 48 ; i < 58 ; i++)
				{
					q = (h * 10) + g;
					t = (e * 10) + i;
					if (q < t)
					{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
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
