#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * Return: pointer of an array of characters
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *ret;
	unsigned int size1, size2;

	size1 = 0;
	size2 = 0;
	ptr = s1;
	if (s1)
	:wq	while (*ptr++)
			size1++;
	else
		s1 = "";

	ptr = s2;
	if (s2)
		while (*ptr++)
			size2++;
	else
		s2 = "";

	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = 0;

	return (ret);
}
