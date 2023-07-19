#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - calculate the sum of two int.
 * @a: first int.
 * @b: second int.
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference between two int.
 * @a: first int.
 * @b: second int.
 * Return: difference between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of two int.
 * @a: first int.
 * @b: second int.
 * Return: the product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division of two int.
 * @a: first int.
 * @b: second int.
 * Return: the division of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculate the remainder of the division of two int.
 * @a: first int.
 * @b: second int.
 * Return: the remainder of the division of a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
