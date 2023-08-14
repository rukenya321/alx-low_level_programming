#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num1 = 0;
	int Num2, Num3;

	while (Num1 <= 9)
	{
		Num2 = 0;
		while (Num2 <= 9)
		{
			Num3 = 0;
			while (Num3 <= 9)
			{
				if (Num1 != Num2 && Num1 < Num2 && Num2 != Num3 && Num2 < Num3)
				{
					putchar(Num1 + 48);
					putchar(Num2 + 48);
					putchar(Num3 + 48);

					if (Num1 + Num2 + Num3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				Num3++;
			}
			Num2++;
		}
		Num1++;
	}
	putchar('\n');

	return (0);
}
