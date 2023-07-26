#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array input argument
 * @n: input n elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
			printf(", %d", a[i]);
	}
	printf("\n");
}
