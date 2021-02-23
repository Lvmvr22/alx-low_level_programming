#include "holberton.h"

/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: Pointer to the string to be printed
 * Return: No return Value. Function is Void
 */

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
