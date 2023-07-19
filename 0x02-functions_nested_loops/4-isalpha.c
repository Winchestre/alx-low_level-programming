#include <stdio.h>
/**
 * _isalpha - Entry point
 * Description: 'Returns 1 for alphabet characters. 0 for others'
 * @c: character argument
 * Return: 0
 */
int _isalpha(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
			return (0);
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
			return (0);
	}

}
