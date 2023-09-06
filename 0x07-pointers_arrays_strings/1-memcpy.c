#include "main.h"

/**
 * *_memcpy - Copies memory area.
 *
 * @dest: Pointer of destination
 *
 * @src: Pointer of source
 *
 * @n: Int for the test.
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpy_mem;

	for (cpy_mem = 0; cpy_mem < n; cpy_mem++)
	{
		dest[cpy_mem] = src[cpy_mem];
	}

	return (dest);
}
