#include "main.h"
#include <stdio.h>

/**
 * if_Printable - Decides whether the character is printable.
 *
 * @p: Int for the test
 *
 * Return: 1 if false || 0 if false.
 */

int if_Printable(int p)
{
	return (p >= 32 && p <= 126);
}

/**
 * if_Hex - Print hex values.
 *
 * @b: String for the test.
 *
 * @begin: Where to start.
 *
 * @stop: Where to stop.
 */

void if_Hex(char *b, int begin, int stop)
{
	int h = 0;

	while (h < 10)
	{
		if (h < stop)
			printf("%02x", *(b + begin + h));
		else
			printf(" ");
		if (h % 2)
			printf(" ");
		h++;
	}
}

/**
 * printable_ASCI - Printable ascii for h.
 *
 * @b: String to print.
 *
 * @begin: Where to begin.
 *
 * @stop: Where to stop.
 */

void printable_ASCI(char *b, int begin, int stop)
{
	int hc, i = 0;

	while (i < stop)
	{
		hc = *(b + i + begin);
		if (!if_Printable(hc))
			hc = 46;
		printf("%c", hc);
		i++;
	}
}

/**
 * print_buffer - A buffer printer.
 *
 * @b: String for test.
 *
 * @size: Size of buffer.
 */

void print_buffer(char *b, int size)
{
	int begin, stop;

	if (size > 0)
	{
		for (begin = 0; begin < size; begin += 10)
		{
			stop = (size - begin < 10) ? size - begin : 10;
			printf("%08x: ", begin);
			if_Hex(b, begin, stop);
			printable_ASCI(b, begin, stop);
			printf("\n");
		}
	}
	else
		printf("\n");
}
