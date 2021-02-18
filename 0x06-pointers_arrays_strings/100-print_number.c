#include "holberton.h"
#include <stdio.h>
/**
* print_number - prints an integer.
* @n: integer
* Return: void
*/
void print_number(int n)
{
	int divisor = 1, i, resp;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	for (i = 0; n / divisor > 9; i++)
	{
		divisor *= 10;
	}
	for (; divisor >= 10; divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
		n = n - resp * divisor;
	}
	_putchar('0' + n);
}
