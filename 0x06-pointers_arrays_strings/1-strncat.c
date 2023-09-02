#include "main.h"

/**
  * *_strncat - Concatenates two strings
  *
  *@n: Int for the test
  *
  *@dest: First string
  *
  *@src: Second string
  *
  *Return: Initial value of dest
  */

char *_strncat(char *dest, char *src, int n)
{
	char *origi_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (origi_dest);
}
