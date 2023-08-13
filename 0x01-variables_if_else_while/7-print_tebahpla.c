#include <stdio.h>
/**
 * main - Entry point.
 *
 * DEscription - This program prints lowercase alphabets in reverse.
 *
 * Return: Always (Success)
 */

int main(void)
{
	char revAZ = 'z';

	while (revAZ >= 'a')
	{
		putchar(revAZ);
		revAZ--;
	}

	putchar('\n');

	return (0);
}
