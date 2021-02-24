#include "holberton.h"

/**
 * _pow_recursion - Entry Point. Returns the power of an integer to another
 * @l: base integer
 * @n: exponent int
 * Return: Returns the value of l to power y
 */

int _pow_recursion(int l, int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (l * _pow_recursion(l, n - 1));
}
