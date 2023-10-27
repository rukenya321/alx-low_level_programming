#include "main.h"
#include <stdio.h>

/**
* is_prime_number - check a prime number
* @n2: first number for the test
* @n: second number for the test
* Return: 0 or 1
*/

int prime_checker(int n, int n2);
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}

/**
* prime_checker - checks whether no's less than n can divide it
* @n: int for the test
* @n2: int for the test
* Return: return an int
*/

int prime_checker(int n, int n2)
{
	if (n2 >= n && n > 1)
	{
		return (1);
	}
	else if (n % n2 == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, n2 + 1));
	}
}
