#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: Integer for the test.
 *
 * @sqrt_num1: The square root output.
 *
 * Return: The square root of the input number.
 */

int sqrt_func(int n, int sqrt_num1);

int _sqrt_recursion(int n)
{
	return (sqrt_func(n, 1));
}

/**
 * sqrt_func - This finds the square root.
 *
 * @n: This helps to get square root.
 *
 * @sqrt_num1: Square root.
 *
 * Return: Always 0.
 */

int sqrt_func(int n, int sqrt_num1)
{
	if (sqrt_num1 * sqrt_num1 == n)
	{
		return (sqrt_num1);
	}
	else if (sqrt_num1 * sqrt_num1 < n)
	{
		return (sqrt_func(n, sqrt_num1 + 1));
	}
	else
	{
		return (-1);
	}
}
