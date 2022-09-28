#include "main.h"

/**
 * sqroot - determines aquare root of a numer
 *
 * @i: integer
 * @j: iterator
 *
 * Return: squareroot
 */

int sqroot(int i, int j)
{
	if (j * j > i)
	{
		return (-1);
	}
	if (j * j == i)
	{
		return (j);
	}
	return (sqroot(i, j + 1));

}

/**
 * _sqrt_recursion - function that returns natural squares
 *
 * @n: number
 *
 * Return: square
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqroot(n, 1));
	}
	return (0);

}
