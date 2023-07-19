#include "main.h"
/**
 * _islower - Entry point
 * @c: character argument
 * Description - checks if character is lower or upper case
 * Return: 1 for lower case. 0 for other.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
	_putchar('\n');
}
