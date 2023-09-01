#include "main.h"

/**
 * flip_bits - counts number of bits to change while transversing digits
 * @n: first number argument
 * @m: second number argument
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = excl >> i;

		if (curr & 1)
			count++;
	}

	return (count);
}
