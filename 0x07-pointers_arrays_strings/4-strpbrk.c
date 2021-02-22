#include "holberton.h"

/**
 *_strpbrk - search a string for any of a set of bytes.
 *@s: pointer to a string.
 *@accept: char
 *Return: Returns a pointer that matches one of the bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int l, n;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[l] == accept[n])
			{
				return (s + l);
			}
		}
		if (s[l] == accept[n])
		{
			return (s + l);
		}
	}
		return ('\0');

}
