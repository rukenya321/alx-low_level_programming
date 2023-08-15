#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Description - This programs utilizes the prototype of a function.
 *
 * Return: Always Success
 *
 */

void print_alphabet(void)
{
	char a2Z = 'a';

	while (a2Z <= 'z')
	{
		_putchar(a2Z);
		a2Z++;
	}

	_putchar('\n');

}
