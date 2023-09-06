#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Char
 *
 * @accept: char
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, m;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (m = 0; accept[m] != s[r]; m++)
		{
			if (accept[m] == '\0')
				return (r);
		}
	}

	return (r);
}
