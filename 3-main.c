#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n;

    {
        int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
        n = sizeof(array) / sizeof(array[0]);

        printf("=== Regular array ===\n");
        print_array(array, n);
        quick_sort(array, n);
        print_array(array, n);
    }


    {
        int single_element_array[] = {42};
        n = sizeof(single_element_array) / sizeof(single_element_array[0]);

        printf("\n=== Single element array ===\n");
        print_array(single_element_array, n);
        quick_sort(single_element_array, n);
        print_array(single_element_array, n);
    }

    {
        int two_element_array[] = {24, 1};
        n = sizeof(two_element_array) / sizeof(two_element_array[0]);

        printf("\n=== Two element array ===\n");
        print_array(two_element_array, n);
        quick_sort(two_element_array, n);
        print_array(two_element_array, n);
    }

    {
        int three_element_array[] = {24, 1, 78};
        n = sizeof(three_element_array) / sizeof(three_element_array[0]);

        printf("\n=== Three element array ===\n");
        print_array(three_element_array, n);
        quick_sort(three_element_array, n);
        print_array(three_element_array, n);
    }

    {
        int identical_elements_array[] = {5, 5, 5, 5, 5};
        n = sizeof(identical_elements_array) / sizeof(identical_elements_array[0]);

        printf("\n=== All identical elements array ===\n");
        print_array(identical_elements_array, n);
        quick_sort(identical_elements_array, n);
        print_array(identical_elements_array, n);
    }

    {
        int negative_elements_array[] = {-3, -1, -7, -4, -2};
        n = sizeof(negative_elements_array) / sizeof(negative_elements_array[0]);

        printf("\n=== Negative elements array ===\n");
        print_array(negative_elements_array, n);
        quick_sort(negative_elements_array, n);
        print_array(negative_elements_array, n);
    }


    return 0;
}
