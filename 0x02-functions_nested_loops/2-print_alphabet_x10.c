#include "main.h"
/**
 * print_alphabet_x10 - Entry point.
 *
 * Description - This program prints out 10x alphabets in lowercase.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char aZ10x = 'a';
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		for (aZ10x = 'a'; aZ10x <= 'z'; aZ10x++)
		{
			_putchar(aZ10x);
		}

		_putchar('\n');
	}
}
