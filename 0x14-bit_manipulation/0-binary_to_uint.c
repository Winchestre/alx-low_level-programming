#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned integer
 * @b: string containing the binary number
 * Return: Converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal = 2 * decimal + (b[i] - '0');
		i++;
	}

	return (decimal);
}
