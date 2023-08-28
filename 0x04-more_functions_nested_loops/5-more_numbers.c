#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 * followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int ctimes;
	int cnum;

	for (ctimes = 0; ctimes <= 10; ctimes++)
	{
		for (cnum = 0; cnum <= 14; cnum++)
		{
			if (cnum >= 10)
			{
				_putchar(cnum / 10 + '0');
			}

			_putchar(cnum % 10 + '0');
		}

		_putchar('\n');
	}
}
