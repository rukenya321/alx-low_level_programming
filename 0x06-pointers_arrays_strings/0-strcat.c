#include "main.h"
#include <string.h>
/**
  *_strcat - Concatenates two strings
  *
  *@dest: First character
  *@src: Second character
  *Return: The original value of dest.
  */

char *_strcat(char *dest, char *src)
{
	/* This stores the initial value of dest */
	char *initial_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (initial_dest);
}

