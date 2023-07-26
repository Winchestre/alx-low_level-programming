#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string argument
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0;
	int i;
	char rev = s[0];

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
