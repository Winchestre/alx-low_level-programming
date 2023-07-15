#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - use 'putchar' to print single digits of base ten
 *
 * Return: 0
 *
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
