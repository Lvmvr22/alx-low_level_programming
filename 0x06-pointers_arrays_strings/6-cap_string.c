#include "holberton.h"

/**
 * cap_string - entry point, capitalization function
 * @laini: pointer to a string whose words are to be capitalized
 * Return: returns capitalized string
 */

char *cap_string(char *laini)
{
	int tun;

	tun = 0;
	for (; laini[tun] != '\0'; tun++)
	{
		if (tun == 0 && laini[tun] >= 97 && laini[tun] <= 122)
		{
			laini[tun] -= 32;
		}
		if (laini[tun] >= 97 && laini[tun] <= 122
		    && (laini[tun - 1] == 32 || laini[tun - 1] == ','
			|| laini[tun - 1] == ';' || laini[tun - 1] == '.'
			|| laini[tun - 1] == '!' || laini[tun - 1] == '?'
			|| laini[tun - 1] == '"' || laini[tun - 1] == '('
			|| laini[tun - 1] == ')' || laini[tun - 1] == '{'
			|| laini[tun - 1] == '}' || laini[tun - 1] == '\n'
			|| laini[tun - 1] == '\t'))
		{
			laini[tun] -= 32;
		}
	}
	return (laini);
}
