#include "function_pointers.h"

/**
 * print_name - print name using pointer to func
 * @name: string input argument
 * @f: pointer to void function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
