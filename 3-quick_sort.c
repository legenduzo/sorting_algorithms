#include "sort.h"

/**
 * lomuto - implements the lomuto partition scheme
 * @array: the array to process
 * @high: high
 * @low: low
 * @size: size of the array
 *
 * Return: int
 */

int lomuto(int *array, int low, int high, size_t size)
{
	int pivot, i, j, a;

	pivot = array[high];
	i = low;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			if (i < j)
			{
				a = array[i];
				array[i] = array[j];
				array[j] = a;
				print_array(array, size);
			}
			i++;
		}
	}
	if (high != i)
	{
		array[high] = array[i];
		array[i] = pivot;
		print_array(array, size);
	}
	return (i);
}

/**
 * qs_recursive - recursive call to quick sort
 * @array: the array
 * @low: low
 * @high: high
 * @size: size of array
 */

void qs_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto(array, low, high, size);
		qs_recursive(array, low, pivot - 1, size);
		qs_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array using the quicksort algorithm
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;

	qs_recursive(array, 0, size - 1, size);
}
