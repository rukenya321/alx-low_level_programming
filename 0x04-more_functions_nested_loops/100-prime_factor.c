#include <stdoi.h>

/**
 * tsqr - Entyr point
 *
 * @s: Input for the day
 *
 * Return: 0.
 */

double tsqr(double s)
{
	float tsqr, mpt;

	tsqr = s / 2;
	mpt = 0;

	while (tsqr != mpt)
	{
		mpt = tsqr;
		tsqr = (s / mpt + mpt) / 2;
	}
	return (tsqr);
}

/**
 * prime_largest - Prints the largest prime factor number
 *
 * @p: Int for the test
 */

void prime_largest(long int p)
{
	int primo, lager;

	while (p % 2 == 0)
		p = p / 2;

	for (primo = 3; primo <= tsqr(p); primo += 2)
	{
		while (p % primo == 0)
		{
			p = p / primo;
			lager = primo;
