#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *isArray;
	int i, size;
	
	size = max - min + 1;
	if (min > max)
		return (NULL);

	isArray = malloc(sizeof(int) * size);
	if (isArray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		isArray[i] = min++;

	return (isArray);
}
