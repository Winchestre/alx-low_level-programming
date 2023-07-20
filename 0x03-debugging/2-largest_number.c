#include "main.h"

/**
 * largest_number - returns the largest of three number inputs
 * @a: first number argument
 * @b: second number argument
 * @c: third number argument
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	largest = (a > b) ? a : b;
	largest = (largest > c) ? largest : c;

	return (largest);
}
