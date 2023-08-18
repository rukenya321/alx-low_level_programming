#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @z: Int value for the test today
 *
 * Return: return the value of z
 */

int print_last_digit(int z)
{
	int noLast;

	if (z < 0)
		noLast = -1 * (z % 10);
	else
		noLast = z % 10;

	_putchar(noLast + '0');
	return (noLast);
}
