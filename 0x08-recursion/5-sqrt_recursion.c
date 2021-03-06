#include "holberton.h"

/**
* _checker - Checks the function _sqrt_recursion
* @l: Integer
* @n: Integer
* Return: A checker for the above function
*/

int _checker(int l, int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}

	else if ((l * l) < n)
	{
		return (_checker(l + 1, n));
	}

	else if ((l * l) == n)
	{
		return (l);
	}
	return (-1);

}

/**
*_sqrt_recursion - evaluates a square root
*@m: interger to be calculated
*Return: The square root of an integer
*/

int _sqrt_recursion(int m)
{
	int x;

	x = 0;
	if (x < 0)
		return (-1);

	else
	{
		return (_checker(x, m));
	}

}
