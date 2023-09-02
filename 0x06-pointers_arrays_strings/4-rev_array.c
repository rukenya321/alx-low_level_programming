#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: An array of integers.
 *
 * @n: The number of elements of the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int fake;
	int last_index;
	int index_array;

	last_index = n - 1;

	for (index_array = 0; index_array < n / 2; index_array++)
	{
		fake = a[index_array];
		a[index_array] = a[last_index];
		a[last_index] = fake;
		last_index--;
	}
}
