#include "main.h"
#include <string.h>

/**
 * puts_half - Entry point
 *
 * @str: char *
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int begin;

	if (len % 2 == 0)
	{
		begin = len / 2;
	}
	else
	{
		begin = (len - 1) / 2;
	}

	while (str[begin] != '\0')
	{
		_putchar(str[begin]);
		begin++;
	}

	_putchar('\n');
}
