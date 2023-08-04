#include <stdio.h>
/**
 * _isalpha - Entry point
 * Description: 'Returns 1 for alphabet characters. 0 for others'
 * @c: character argument
 * Return: 0
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);

}
