#include "holberton.h"
/**
 *string_toupper - changes all lowercase to uppercase
 *@str: string pointer
 *
 *Return: char string with all caps
 */

char *string_toupper(char *str)
{
	int wamzy;

	for (wamzy = 0; str[wamzy] != '\0'; wamzy++)
	{
		if (str[wamzy] >= 97 && str[wamzy] <= 122)
		{
			str[wamzy] -= 32;
		}
	}
	return (str);
}
