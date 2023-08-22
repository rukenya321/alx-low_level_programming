#include "main.h"

/**
 * puts2 - Prints every character in a string.
 *
 * @str: char *
 *
 * Return: void
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}

	_putchar('\n');
}
