#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description - This program prints combination of no's.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num0 = 0, Num1;

	while (Num0 <= 9)
	{
		Num1 = 0;
		while (Num1 <= 9)
		{
			if (Num0 != Num1 && Num0 < Num1)
			{
				putchar(Num0 + 48);
				putchar(Num1 + 48);

				if (Num0 + Num1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			Num1++;
		}
		Num0++;
	}
	putchar('\n');

	return (0);
}
