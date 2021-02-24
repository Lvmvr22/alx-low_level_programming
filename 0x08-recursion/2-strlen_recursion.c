#include "holberton.h"

/**
 *_strlen_recursion - Returns the length of a string
 *@p: pointer
 *Return: Returns length of a string
 */

int _strlen_recursion(char *p)
{
	if (p[0] != '\0')
	{
		return (_strlen_recursion(++p) + 1);
	}
	return (0);
}
