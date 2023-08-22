#include "main.h"

/**
 * swap_int - Entry point.
 *
 * @swap: Swap integers.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
