#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description - Prints string in lowercase
 *
 * Return: 0
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
