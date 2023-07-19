#include "main.h"
/**
 * times_table - print 9 multiplication from zero
 * Return: value
 */
void times_table(void)
{
	int a, b;
       	int c, d, e, f, g, h, i, j;
	c = 0;
	d = 0;
	e = 0;
	f = 0;
	g = 0;
	h = 0;
	i = 0;
	j = 0;

	for (a = 0; a < 1; a++)
	{
		for (b = 0; b < 10; b++)
		{
			printf("%d, ", a);
			printf("%2d, ", b);
			printf("%2d, ", c);
			c += 2;
			printf("%2d, ", d);
			d += 3;
			printf("%2d, ", e);
			e += 4;
			printf("%2d, ", f);
			f += 5;
			printf("%2d, ", g);
			g += 6;
			printf("%2d, ", h);
			h += 7;
			printf("%2d, ", i);
			i += 8;
			printf("%2d", j);
			j += 9;
			printf("\n");
		}
		printf("\n");
	}
}
