#include "main.h"

/**
 * _strlen_recursion - Returns length of a string
 * @s: String argument
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int length;

	length = 0;
	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
