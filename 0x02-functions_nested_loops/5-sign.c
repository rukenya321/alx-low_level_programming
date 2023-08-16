#include "main.h"
/**
 * print_sign - Writes a function sign of a number
 * .
 * @n: Int for the test
 *
 * Return: 1 if n is > 0 and prints +
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}

	else if (n == 0)
	{
		printf("0");
		return (0);
	}

	else if (n < 0)
	{
		printf("-");
		return (-1);
	}

	return (0);
}
