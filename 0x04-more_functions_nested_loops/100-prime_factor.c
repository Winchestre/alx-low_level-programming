#include <stdio.h>
#include "main.h"

/**
 * main - print largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int num, f_num;

	num = 612852475143;
	for (f_num = 2; f_num <= num; f_num++)
	{
		if (num % f_num == 0)
		{
			num /= f_num;
			f_num--;
		}
	}
	printf("%ld\n", f_num);

	return (0);
		
}
