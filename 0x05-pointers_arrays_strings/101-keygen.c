#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	srand(time(NULL));
	int a;

	const char charSet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYS";
	const int ps_len = 10;
	char ps[ps_len + 1];

	for (a = 0; a < ps_len; a++)
	{
		int index = rand() % (sizeof(charSet) - 1);
		ps[a] = charSet[index];
	}

	ps[ps_len] = '\0';

	printf("The generated password is: %s\n", ps);

	return (0);
}
