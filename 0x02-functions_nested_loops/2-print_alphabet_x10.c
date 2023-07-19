#include <main.h>
/**
 * print_alphabet_x10 - Entry point
 *
 * Description - Print lowercase alphabets ten times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
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
	print_alphabet_x10();
}
