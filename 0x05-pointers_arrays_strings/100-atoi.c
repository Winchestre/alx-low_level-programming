#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string argument
 * Return: converted string
 */
int _atoi(char *s)
{
	int i, d, f, n, len, num;

	i = 0;
	d = 0;
	f = 0;
	n = 0;
	len = 0;
	num = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			d++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (d % 2 == 0)
			{
				num = -num;
			}
			n = n * 10 + num;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
