#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This programs prints combinations of single digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int combo = 0;

	while (combo <= 9)
	{
		putchar(combo + 48);

		if (combo != 9)
		{
			putchar(',');
			putchar(' ');
		}

		combo++;
	}
	putchar('\n');

	return (0);
}
