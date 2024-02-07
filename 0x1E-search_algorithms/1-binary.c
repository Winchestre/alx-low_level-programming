#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int half;

	half = ceil(size / 2);

	if (!array)
		return (-1);
	if (array[half - 1] <= value)
	{
		for (int i = half; i < size; i++)
		{
			if (array[i - 1] == value)
				return i;
		}
		return (-1);
	}
}
