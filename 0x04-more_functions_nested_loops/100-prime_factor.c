#include <stdio.h>
#include "main.h"

/**
 * main - print largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long num; 
	int f_num;

	num = 612852475143;
	while (f_num++ < num / 2)
	{
		if (num % f_num == 0)
		{
			num /= 2;
			continue;
		}
		for (f_num = 3; f_num < num / 2; f_num += 2)
		{
			if (num % f_num == 0)
			{
				num /= f_num;
			}
		}
	}
	printf("%ld\n", num);

	return (0);
		
}
