#include "main.h"

/**
 * _memset - fill memory with a constsnt byte
 * @s: memory location
 * @b: constant byte
 * @n: filled byte
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
