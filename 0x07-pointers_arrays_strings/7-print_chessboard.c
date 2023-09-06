#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: R
 *
 * Return: void.
 */

void print_chessboard(char(*a)[8])
{
	int r, m;

	for (r = 0; r < 8; r++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[r][m]);
		}
		_putchar('\n');
	}
}
