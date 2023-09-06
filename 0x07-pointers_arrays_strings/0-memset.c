#include "main.h"

/**
 * *_memset - Entry point of the program.
 *
 * @s: pointer of char type.
 *
 * @b: This is a constant byte.
 *
 * @n: Int for the test.
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int fill_mem;

	for (fill_mem = 0; n > 0; fill_mem++, n--)
	{
		s[fill_mem] = b;
	}

	return (s);
}
