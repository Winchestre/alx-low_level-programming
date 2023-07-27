#include "main.h"

/**
 * rot13 - encoding using rot13
 * @s: variable argument
 *Return: Always 0
 */
char *rot13(char *S)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphaRot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"

	i = 0;
	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = alphaRot[j];
				break;
			}
		}
		i++;
	}

	return (s);

}
