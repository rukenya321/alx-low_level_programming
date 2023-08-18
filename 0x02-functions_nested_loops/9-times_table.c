#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Null
 */

void times_table(void)
{
	int h, v;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			printf("%d\t", h * v);
		}

		printf("\n");
	}
}
