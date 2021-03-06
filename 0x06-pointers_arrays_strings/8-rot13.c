#include "holberton.h"

/**
 * rot13 - entry point - translates characters to ROT13 format
 * @string: pointer to string to be formatted
 * return: returns encoded string 
 */

char *rot13(char *string)
{
	int l;
	int n;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (l = 0; string[l] != '\0'; l++)
	{
		for (n = 0; string[n] != '\0'; n++)
		{
			if (string[l] == input[n])
			{
				string[l] = output[n];
				break;
			}
		}
	}
	return (string);
}
