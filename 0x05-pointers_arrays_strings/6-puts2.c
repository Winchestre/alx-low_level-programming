#include "main.h"

/**
 * puts2 - prints one of two characters from a string
 * @str: string argument
 * Return: void
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar(str[count]);
			break;
		}
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
}
