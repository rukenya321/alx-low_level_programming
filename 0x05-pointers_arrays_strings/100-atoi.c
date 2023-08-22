#include "main.h"

/**
 * _atoi - Entry point
 *
 * @s: char *
 *
 * Return: 0 (Succes)
 */

int _atoi(char *s)
{
	int ans = 0;
	int expression = 1;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}

	if (*s == '-')
	{
		expression = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		if (ans > (2147483647 - (*s - '0')) / 10)
		{
			return ((expression == 1) ? 2147483647 : -2147483648);
		}

		ans = ans * 10 + (*s - '0');
		s++;
	}

	return (ans * expression);
}
