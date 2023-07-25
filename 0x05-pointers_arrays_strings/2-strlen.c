#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: pointer to string
 * Return: lengthof string
 */
int _strlen(char *S)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		counter++;
		return (counter);
	}
}
