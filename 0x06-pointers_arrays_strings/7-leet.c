#include "main.h"

/**
 * leet - Entry point.
 *
 * @strn: First string
 *
 * Return: Initial value of the character.
 */

char *leet(char *strn)
{

	char *initstring_value = strn;

	while (*strn != '\0')
	{
		char liit = *strn;

		if ((liit == 'a' || liit == 'A'))
		{
			*strn = '4';
		}
		else if (liit == 'e' || liit == 'E')
		{
			*strn = '3';
		}
		else if (liit == 'o' || liit == 'O')
		{
			*strn = '0';
		}
		else if (liit == 't' || liit == 'T')
		{
			*strn = '7';
		}
		else if (liit == 'l' || liit == 'L')
		{
			*strn = '1';
		}

		strn++;
	}

	return (initstring_value);
}
