#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by new line
 *
 * @separator: string printed btw num
 * @n: numbers of int passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
