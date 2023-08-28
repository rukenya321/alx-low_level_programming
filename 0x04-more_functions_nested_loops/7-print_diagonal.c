#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 *
 * @n: The number of times the
 * characer \ should be printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int tiAgno;
	int zpace;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tiAgno = 1; tiAgno <= n; tiAgno++)
		{
			for (zpace = 1; zpace <= tiAgno; zpace++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
