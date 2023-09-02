#include "main.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase.
 *
 * @ctr: Character for the test.
 *
 * Return: Original value of ctr.
 */

char *string_toupper(char *ctr)
{
	char *origi = ctr;

	while (*ctr != '\0')
	{
		if (*ctr >= 'a' && *ctr <= 'z')
		{
			*ctr = *ctr - ('a' - 'A');
		}
		ctr++;
	}
	return (origi);
}
