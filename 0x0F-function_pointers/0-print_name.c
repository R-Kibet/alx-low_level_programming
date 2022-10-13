#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name
 * @f: pointer to fnction
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
