#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * @n: amount of bytes
 * Return: pointer to allocated memory
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str_out;
	unsigned int i, len_s1, len_s2, length;

	len_s1 = len_s2 = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	if (n > len_s2)
		n = len_s2;
	length = len_s1 + n;
	str_out = malloc(length + 1);

	if (str_out == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		if (i < len_s1)
		{
			str_out[i] = s1[i];
		} else
		{
			str_out[i] = s2[i - len_s1];
		}
	}
	str_out[i] = '\0';

	return (str_out);
}
