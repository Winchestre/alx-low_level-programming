#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int x;
	int y;
	
	for (x = 0; x < 9; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != y)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
