#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - use 'putchar' and print alphabet in reverse
 *
 * Return: 0
 *
 */

int main(void)
{
	char revCh;

	for (revCh = 'z'; revCh >= 'a'; revCh--)
	{
		putchar(revCh);
	}
	putchar('\n');
	return (0);
}
