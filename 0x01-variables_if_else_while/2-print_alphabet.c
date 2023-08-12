#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	char alPhabet = 'a';

	while (alPhabet <= 'z')
	{
		putchar(alPhabet);
		alPhabet++;
	}
	putchar('\n');

	return (0);
}
