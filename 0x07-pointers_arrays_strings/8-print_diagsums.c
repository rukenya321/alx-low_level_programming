#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints sum.
 *
 * @a: Int for the test.
 *
 * @size: Size of int a.
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int r, m = 0, j = 0;

	for (r = 0; r < size; r++)
	{
		m += a[r];
		j += a[size - r - 1];
		a += size;
	}
	printf("%d, ", m);
	printf("%d\n", j);
}
