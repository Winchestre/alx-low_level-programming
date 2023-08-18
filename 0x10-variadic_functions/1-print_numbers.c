#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers
 * followed by a new line.
 * @separator: string to be printed between number
 * @n: number of integers passed to the function.
 * Return: no return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
