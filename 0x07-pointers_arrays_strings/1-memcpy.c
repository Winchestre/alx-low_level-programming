#include "main.h"

/**
 * _memcpy - Entry point
 * @dest: input arg
 * @src: input arg
 * @n: input arg
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (0);
}
