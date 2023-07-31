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
	int i, j;
	
	j = n;
	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
