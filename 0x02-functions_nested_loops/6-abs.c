#include "main.h"

/**
 * _abs - Entry point
 *
 * @i : int i
 *
 * Return: 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = i * (-1);
	}
	return (i);
}
