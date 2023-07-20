#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: argument
 * Return: returns 1 if c argument is a digit. returns 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
		{
			return (1);
		}
			return (0);
	}
}
