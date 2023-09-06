#include "main.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: Pointer
 *
 * @accept: Char
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int r, m;
	char *ptr;

	r = 0;
	while (s[r] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (accept[m] == s[r])
			{
				ptr = &s[r];
				return (ptr);
			}
			m++;
		}
		r++;
	}

	return (0);
}
