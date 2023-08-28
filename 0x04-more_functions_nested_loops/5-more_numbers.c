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
	int crounds;

	for (ctimes = 1; ctimes <= 10; ctimes++)
	{
		for (crounds = 0; crounds <= 14; crounds++)
		{
			cnum = crounds;
			if (crounds > 9)
			{
				_putchar(1 + 48);
				cnum = crounds % 10;
			}

			_putchar(cnum + 48);
		}

		_putchar('\n');
	}
}
