#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - This program prints all lower alphabets excluding e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char noQE = 'a';

	while (noQE <= 'z')
	{
		if (noQE == 'e' || noQE == 'q')
			noQE++;
		putchar(noQE);
		noQE++;
	}

	putchar('\n');

	return (0);
}
