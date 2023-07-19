#include <stdio.h>
void jack_bauer(void);
int main(void)
{
	jack_bauer();
	return (0);
}
void jack_bauer(void)
{
	int i, j;
	for (j = 0; j < 24; j++)
	{
	
		for (i = 0; i < 60; i++)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(':');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar('\n');
		}
	}
}
