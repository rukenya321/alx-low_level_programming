#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints out numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char Num = '0';

	while (Num <= '9')
	{
		putchar(Num);
		Num++;
	}

	putchar('\n');

	return (0);
}
