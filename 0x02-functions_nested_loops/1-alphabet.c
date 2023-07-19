#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Print lowercase alphabets with new line
 *
 * Return: 0
 *
 */
int print_alphabet();
int main(void)
{
	print_alphabet();

	return (0);
}
int print_alphabet()
{
	char ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
