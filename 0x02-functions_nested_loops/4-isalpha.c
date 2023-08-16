#include "main.h"
/**
 * _isalpha - Entry point.
 *
 * @c: Our int for the test.
 *
 * Return: 1 if c is a letter || 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c >= 122)
		return (1);
	return (0);
}
