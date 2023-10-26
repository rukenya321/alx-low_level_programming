#include "main.h"

/**
* is_prime_number - checks if a number is prime.
* @n: Integer for the test.
* @p: Int for the test
* Return: 1 if number is prime or 0 if not.
*/

int is_prime_number(int n)
{
	int p;

	if (n <= 1)
	{
		return 0;
	}

	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	for (p = 5; p * p <= n; p += 6)
	{
		if (n % p == 0 || n % (p + 2) == 0)
		{
			return (0);
		}
	}
	return (1);
}
