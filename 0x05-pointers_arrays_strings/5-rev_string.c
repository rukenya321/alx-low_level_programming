#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 *
 * @s: char *
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);

	int begin = 0;
	int stop = len - 1;

	while (begin < stop)
	{
		char test = s[begin];

		s[begin] = s[stop];
		s[stop] = test;

		begin++;
		stop--;
	}
}
