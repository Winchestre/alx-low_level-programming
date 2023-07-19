#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description - function prints lowercase alphabet
 *
 * Return: 0
 *
 */	
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
print_alphabet();
return (0);
}
