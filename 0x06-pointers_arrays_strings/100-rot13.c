#include "main.h"

/**
 * *rot13 - Encodes a string using rot13.
 *
 * @s: String for the test.
 *
 * Return: Initial value of the encoded string.
 */

char *rot13(char *s)
{
	int rot;

	char type1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char TYPE1[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *strn = s;

	while (*s)
	{
		for (rot = 0; rot <= 52; rot++)
		{
			if (*s == type1[rot])
			{
				*s = TYPE1[rot];
				break;
			}
		}
		s++;
	}

	return (strn);
}
