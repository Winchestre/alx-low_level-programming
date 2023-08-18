#include "variadic_functions.h"

/**
 * print_strings - A function that prints strings
 * followed by a new line
 * @separator: string to be printed between string arguments
 * @n: number of strings passed to function.
 * Return: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *s;
	unsigned int i;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		s = va_arg(ap, char *);
		s ? printf("%s", s) : printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(ap);
}
