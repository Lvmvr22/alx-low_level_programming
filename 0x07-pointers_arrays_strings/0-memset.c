#include "holberton.h"
/**
 *_memset - Fills memory with a constant byte
 *@p: pointer
 *@b: constant byte
 *@n: size of bytes
 *
 *Return: pointer
 **/

char *_memset(char *p, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		p[i] = b;
		i++;
	}
	return (p);
}
