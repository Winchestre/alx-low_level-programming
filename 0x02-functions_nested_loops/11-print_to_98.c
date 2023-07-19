#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print all natural numbers to 98
 * @n: natural number argument
 * Return: return all natural numbers less than 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", \n");
		}

	}
}
