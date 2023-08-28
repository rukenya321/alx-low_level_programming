#include "main.h"

/**
 * print_square - Prints a square
 *
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int width;
	int length;

	for (width = 1; width <= size; width++)
	{
		for (length = 1; length <= size; length++)
			_putchar('#');
		_putchar('\n');
	}
}
