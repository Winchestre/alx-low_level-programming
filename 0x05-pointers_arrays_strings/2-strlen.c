#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: pointer to string
 * Return: lengthof string
 */
int _strlen(char *s)
{
	int counter, i;

	counter = 0;
	for (i = 0; s[i]; i++)
	{
		if (s[i] != '\0')
		{
			counter++;
		}
			break;
	}
	return (counter);
}
