#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */

int main(void)
{
	int fBT;

	for (fBT = 1; fBT <= 100; fBT++)
	{
		if (fBT % 3 == 0 && !(fBT % 5 == 0))
			printf("Fizz");
		else if (fBT % 5 == 0 && !(fBT % 3 == 0))
			printf("Buzz");
		else if (fBT % 3 == 0 && fBT % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", fBT);
		if (fBT != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
