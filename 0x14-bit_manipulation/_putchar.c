#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character to standard output
 * @c: Character argument
 * Return: Character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
