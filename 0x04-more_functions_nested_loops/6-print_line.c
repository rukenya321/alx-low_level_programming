#include "main.h"

/**
 * print_line - Prints a straight line
 *
 * @n: Int for the test
 *
 * Return:void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
