#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal
 * @n: number argument
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int active;

	i = 63;
	while (i >= 0)
	{
		active = n >> i;

		if (active & 1)
		{
			_putchar('1');
			count++;
		} else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
