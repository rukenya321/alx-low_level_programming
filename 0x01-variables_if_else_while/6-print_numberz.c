#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints out numbers (single digit)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Num = 0;
	while (Num <= 9)
	{
		putchar(Num + '0');
		Num++;
	}

	putchar('\n');

	return (0);
}
