#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

/**
 * shell_sort - Sorts an array of integers in ascending order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
        return;

    for (size_t gap = size / 3; gap > 0; gap /= 3)
    {
        for (size_t i = gap; i < size; i++)
        {
            size_t j = i;
            while (j >= gap && array[j - gap] > array[j])
            {
                swap_ints(array + j, array + (j - gap));
                j -= gap;
            }
        }
        print_array(array, size);
    }
}

