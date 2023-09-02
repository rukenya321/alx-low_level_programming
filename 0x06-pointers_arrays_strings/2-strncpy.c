#include "main.h"

/**
 * *_strncpy - Copies a string.
 *
 * @n: Int for the test.
 *
 *@dest: First character
 *
 *@src: Second character
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *origi_dest = dest;

	while (*dest != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (origi_dest);
}
