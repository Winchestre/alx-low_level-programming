#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input argument
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == find[j])
			{
				n[i] = replace[j / 2];
				j = 9;
			}
		}
	}

	return (n);
}
