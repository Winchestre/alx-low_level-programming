#include "main.h"

/**
 * get_bit - returns the value of a bit at index in decimal
 * @n: number to get
 * @index: index of bit value
 * Return: Value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitt;

	if (index > 63)
		return (-1);
	bitt = (n >> index) & 1;

	return (bitt);
}
