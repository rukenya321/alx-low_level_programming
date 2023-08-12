#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints alphabets in both lower and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char smallA = 'a';
	char BIGa = 'A';

	while (smallA <= 'z')
	{
		putchar(smallA);
		smallA++;
	}

	while (BIGa <= 'Z')
	{
		putchar(BIGa);
		BIGa++;
	}

	putchar('\n');

	return (0);
}
