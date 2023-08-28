#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int two4;

	for (two4 = 0; two4 <= 9; two4++)
	{
		if (two4 == 2 || two4 == 4)
			continue;
		_putchar(two4 + 48);
	}
	_putchar('\n');
}

