#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description - A program that prints all combos of a two-two digit no's.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num1 = 0, Num2;

	while (Num1 <= 99)
	{
		Num2 = Num1;
		while (Num2 <= 99)
		{
			if (Num2 != Num1)
			{
				putchar((Num1 / 10) + 48);
				putchar((Num1 % 10) + 48);
				putchar(' ');
				putchar((Num2 / 10) + 48);
				putchar((Num2 % 10) + 48);

				if (Num1 != 98 || Num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			Num2++;
		}
		Num1++;
	}
	putchar('\n');

	return (0);
}
