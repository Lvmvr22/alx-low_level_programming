#include "holberton.h"

/**
 *print_last_digit - prints last digit of a number
 *@b:number entered
 *Return: returns the last digit of n
 */

int print_last_digit(int b)
{
	int last;

	if (b < 0)
	{
		last = (x % 10) * -1;
	}
	else
	{
		last = b % 10;
	}
	_putchar (last + '0');
	return (last);
}
