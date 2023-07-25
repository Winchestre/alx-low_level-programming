#include "main.h"

/**
 * swap_int - swaps two integer values
 * @a: first argument
 * @b: second argument
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
