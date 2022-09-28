#include "main.h"

/**
 * prime - find the prime number
 *
 * @i: input
 * @j: input
 *
 * Return: boolean whether a true statement
 */

int prime(int i, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (i % j == 0)
	{
		return (0);
	}
	return (prime(i, j - 1));
}


/**
 * is_prime_number - check if the input is a prime number
 *
 * @n: input
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 3)
	{
		return (0);
	}
	return (prime(n, n - 1));
}
