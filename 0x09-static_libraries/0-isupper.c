#include "main.h"
/**
 * _isupper - checks for uppercaes characters
 * @c: character argument
 * Return: 1 if argument is uppercase. 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);
}
