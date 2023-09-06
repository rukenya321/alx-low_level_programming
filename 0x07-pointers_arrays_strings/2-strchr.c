#include "main.h"

/**
 * *_strchr - Locates a char in a string.
 *
 * @s: String for the test.
 *
 * @c: Char for the test.
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int locate_strn;

	for (locate_strn = 0; s[locate_strn] >= '\0'; locate_strn++)
	{
		if (s[locate_strn] == c)
		{
			return (s + locate_strn);
		}
	}

	return ('\0');
}
