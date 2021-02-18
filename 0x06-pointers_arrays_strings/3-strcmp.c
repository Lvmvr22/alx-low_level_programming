#include "holberton.h"

/**
 * _strcmp - entry point - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: returnsthe difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int tunda;
	int akila;

	akila = 0;
	tunda = 0;
	while ((s1[tunda] != '\0' || s2[tunda] != '\0') && akila == 0)
	{
		if (s1[tunda] != s2[tunda])
		{
			akila = s1[tunda] - s2[tunda];
		}
		tunda++;

	}
	return (akila);
		}

