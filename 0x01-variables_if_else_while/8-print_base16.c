#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - use 'putchar' to print all numbers of base 16 in lowercase
 *
 * Return: 0
 *
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	char c;

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
