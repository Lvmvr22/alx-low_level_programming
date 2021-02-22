#include "holberton.h"

/**
 *_strchr - locates a char in a string
 *@p: pointer
 *@c: character
 *return: NULL or pointer
 */

char *_strchr(char *p, char c)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] == c)
		{
			return (p + i);
		}
	}
	if (p[i] == c)
	{
		return (p + i);
	}
	return (0);
}
