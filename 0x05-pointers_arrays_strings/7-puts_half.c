#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @str: string arguent
 * Return: void
 */
void puts_half(char *str)
{
	int i, count = 0, half = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != '\0')
		{
			count++;
		}
			break;
	}
	if (count % 2 == 0)
	{
		half = count / 2;
	} else
	{
		half = (count + 1) / 2;
	}
	for (i = half; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
