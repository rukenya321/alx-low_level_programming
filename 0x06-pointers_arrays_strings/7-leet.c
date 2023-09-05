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
	char C_letters[] = {'A', 'E', 'O', 'T', 'L'};
	int num1[] = {4, 3, 0, 7, 1};
	unsigned int liit;

	while (*strn)
	{
		for (liit = 0; liit < sizeof(C_letters) / sizeof(char); liit++)
		{
			if (*strn == C_letters[liit] || *strn == C_letters[liit] + 32)
			{
				*strn = 48 + num1[liit];
			}
		}
		strn++;
	}

	return (initstring_value);
}
