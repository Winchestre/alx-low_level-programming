#include <stdio.h>
int print_to_98(int n);
int main(void)
{
	print_to_98(98);
	print_to_98(111);
	print_to_98(-10);

	return (0);
}
int print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	for (i = n; i >= 98; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
