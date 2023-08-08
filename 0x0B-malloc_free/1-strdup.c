#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory location
 * @str: char
 * Return: pointer to newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *dup_ptr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup_ptr = malloc(sizeof(char) * (i + 1));
	if (dup_ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		dup_ptr[j] = str[j];

	return (dup_ptr);
}
