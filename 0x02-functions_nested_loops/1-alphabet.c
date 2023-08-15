#include <unistd.h>

/**
 * print_alphabet - Entry point
 *
 * Description - This programs utilizes the prototype of a function.
 *
 * Return: Always 0.
 *.
 */

void print_alphabet(void)
{
	char a2Z = 'a';

	while (a2Z <= 'z')
	{
		_putchar(a2Z);
		a2Z++;
	}

	_putchar('\n');

}

/**
 * main - Demonstrates how to call the "print_alphabet" function.
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();
	return (0);
}
