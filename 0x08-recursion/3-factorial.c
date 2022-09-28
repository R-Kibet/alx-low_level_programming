#include "main.h"

/**
 * factorial - gives factorial of a number
 *
 * @n: number
 *
 * Return: factorials
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
