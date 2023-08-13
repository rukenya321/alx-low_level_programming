#include <stdio.h>
/**
 * main - Entry point.
 *
 * Description - This program prints out hexadecimal numbers in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex09 = '0';
	char hexaf = 'a';

	while (hex09 <= '9')
	{
		putchar(hex09);
		hex09++;
	}

	while (hexaf <= 'f')
	{
		putchar(hexaf);
		hexaf++;
	}

	putchar('\n');

	return (0);
}
