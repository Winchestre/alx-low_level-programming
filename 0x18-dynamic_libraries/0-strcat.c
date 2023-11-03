#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: 'copy to' argument
 * @src: 'copy from' argument
 * Return: Cocatenated strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
