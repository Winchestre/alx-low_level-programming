#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Print lowercase alphabets ten times
 *
 * Return: 0
 *
 */
int print_alphabet_x10();
int main(void)
{
	print_alphabet_x10();
	return (0);
}
int print_alphabet_x10()
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for(ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
