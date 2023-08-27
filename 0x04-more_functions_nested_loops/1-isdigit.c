#include "main.h"

/**
 * _isdigit - Checks for a digit.
 *
 * @c: Int for the test.
 *
 * Return: 1 is c is a digit || 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
