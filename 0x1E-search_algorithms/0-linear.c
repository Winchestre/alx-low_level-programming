#include "search_algos.h"
/**
 * linear_search - A function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: A pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located(on success), otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
