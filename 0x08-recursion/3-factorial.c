#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: Input integer for the test.
 *
 * Return: The factorial of the number given.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
