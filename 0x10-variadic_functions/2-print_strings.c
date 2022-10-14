#include "variadic_functions.h"

/**
 * print_strings - function that print strings
 *
 * @separator: string prined btw strings
 * @n: strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s =  va_arg(str, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator == NULL)
		{
			;
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
