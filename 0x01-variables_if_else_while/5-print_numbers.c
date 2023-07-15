#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print all numbers of base 10 starting from 0
 *
 * Return: 0
 *
 */

int main(void)
{
	int numTen;

	for (numTen = 0; numTen < 10; numTen++)
	{
		printf("%d", numTen);
	}
	printf("\n");
	return (0);
}
