#include "sort.h"

/**
 * selection_sort - sorts an array using the selection sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int a;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		if (min != i)
		{
			a = array[i];
			array[i] = array[min];
			array[min] = a;
			print_array(array, size);
		}
	}
}
