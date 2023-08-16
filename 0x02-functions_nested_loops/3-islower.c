#include "main.h"
/**
 * _islower - Entry point
 *
 * Description - This programs checks lowercase character
 *
 * Return: 1 if c is lowercase || 0 if otherwise
 */

int _islower(void)
{
	int c;

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

