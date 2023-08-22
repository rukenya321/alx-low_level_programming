#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * @a: int *
 *
 * @n: number of elements of the array.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		printf("%d", a[u]);
		if (u < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
