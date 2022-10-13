#include "3-calc.h"

/**
 * op_add - sum 2 int
 *
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub 2 int
 *
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul of 2 int
 *
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: mul
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div 2 int
 *
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: div
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus
 *
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
