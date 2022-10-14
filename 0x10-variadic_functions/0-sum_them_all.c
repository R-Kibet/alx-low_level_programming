#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all aparameters
 *
 * @n: number of parameters
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
