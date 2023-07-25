#include "main.h"

/**
 * rev_string - reverses string
 * @s: string argument
 * Return: void
 */
void rev_string(char *s)
{
	int i, count1 = 0, count2 = 0;
	char new;

	while (s[count1] != '\0')
	{
		count++;
	}
	count2 = count1 -1;
	for (i = 0; i < count1 / 2; i++)
	{
		new = s[i];
		s[i] = s[count2];
		s[count2--] = new;
	}
}
