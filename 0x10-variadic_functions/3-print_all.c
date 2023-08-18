#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j, k;
        char *s;
        const char arg_type[] = "cifs";
	i = k = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (arg_type[j])
		{
			if (format[i] == arg_type[j] && k)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), k = 1;
				break;
			case 's':
				s = va_arg(ap, char *), k = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
