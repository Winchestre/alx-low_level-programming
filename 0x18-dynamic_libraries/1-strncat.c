#include "main.h"

/**
 * _strncat - concat two strings with at most n bytes from src
 * @dest: copy to argument
 * @src: copy from argument
 * @n: n
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}
	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
		{
			j = n;
		}
	}

	return (dest);
}

