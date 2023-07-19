#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer value
 * @n: integer argument
 * Return: Value of last digit
 */
int print_last_digit(int n)
{
	int lastNum;

	lastNum = n % 10;
	if (lastNum < 0)
	{
		_putchar(-lastNum + '0');
		return (-lastNum);
	}
		_putchar(lastNum + '0');
		return (lastNum);
}
