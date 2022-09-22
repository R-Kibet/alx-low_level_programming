#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Entry of the program
 *
 * @a: all
 * Return: success
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		a[i] = toupper(a[i]);
	}
	return (a);
}
