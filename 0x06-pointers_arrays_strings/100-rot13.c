#include "main.h"

/**
 * rot13 - encoding using rot13
 * @s: variable argument
 *Return: s argument
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		i++;
	}

	return (s);
}
