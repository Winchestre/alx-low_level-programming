#include "main.h"
/**
 * times_table - prints the 9 multiplication table
 * Return: returns 9 times table from 0
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i / 9) + '0');
		putchar((i % 9) + '0');
	}
}
