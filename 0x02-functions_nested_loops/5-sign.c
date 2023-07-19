#include "main.h"
/**
 * print_sign - print sign value of integer
 * @n: integer agrgument
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	} else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
		_putchar('0');

		return (0);
}
