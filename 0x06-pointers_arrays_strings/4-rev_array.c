#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array argument
 * @n: n number of elements in array a
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] a[n];
		a[n] = j;
	}
}
