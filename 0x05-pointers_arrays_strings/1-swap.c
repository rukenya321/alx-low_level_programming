#include "main.h"

/**
 * swap_int - Entry point.
 *
 * @a: int *
 *
 * @b: int *
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	int swp = *a;
	*a = *b;
	*b = swp;
}
