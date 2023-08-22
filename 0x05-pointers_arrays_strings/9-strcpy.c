#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: char *
 *
 * @src: char *
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *realDest = dest; /* This stores the initial real value of dest */

	while (*src != '\0')
	{
		*dest = *src; /* Copies from src to dest */
		dest++;
		src++;
	}

	*dest = '\0'; /* Adding null byte to dest */

	return (realDest);
}
