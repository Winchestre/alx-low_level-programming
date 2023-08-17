#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using pointer to function
 * @name: string input argument
 * @f: pointer to void function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
