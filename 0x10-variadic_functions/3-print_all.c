#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: list types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list all;
	unsigned int j, i = 0, k = 0;
	char *s;
	const char a[] = "cifs";

	va_start(all, format);
	while (format && format[i])
	{
		j = 0;
		while (a[j])
		{
			if (format[i] == a[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(all, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(all, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(all, double)), k = 1;
			break;
		case 's':
			s = va_arg(all, char *), k = 1;
			if (!s)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		} i++;
	}
	printf("\n"), va_end(all);
}
