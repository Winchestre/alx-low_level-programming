#include "main.h"

/**
 * _puts - prints string, followed by new line
 * @str: pointer to string argument
 * Return: void
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
