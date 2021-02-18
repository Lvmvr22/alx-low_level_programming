#include "holberton.h"

/**
* _strncpy - concatenates two string
* @dest: Destination pointer
* @src: Source pointer string
* @n: string size
* Return: Returns a concatenated string
*
*/


char *_strncpy(char *dest, char *src, int n)
{
	int wamzy;

	wamzy = 0;
	while (src[wamzy] != '\0' && wamzy < n)
	{
		dest[wamzy] = src[wamzy];
		wamzy++;
	}

	while (wamzy < n)
	{
		dest[wamzy] = '\0';
		wamzy++;
	}

	return (dest);
}
