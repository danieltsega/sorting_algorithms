#include "sort.h"

/**
 * quick_sort - a fuction for the quick
 * sort algorithm
 *
 * @array: a pointer to an array
 * @size: the size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{

	if (size >= 2)
	{

		quickSortAlgo(array, 0, size - 1, size);
	}
}


/**
 * quickSortAlgo - a quick sort algorithm
 * function
 *
 * @array: a pointer to an array
 * @low: lowest part of the array
 * @high: highest part of the array
 * @size: the size of the array
 * Return: no return
 */

void quickSortAlgo(int *array, int low, int high, int size)
{

	int pivot_value, i;

	if (low < high)
	{

		pivot_value = array[high];
		i = low;

		for (j = low; j <= high; j++)
		{

			if (array[j] <= pivot_value)
			{

				swap(&array[i], &array[j]);
				print_array(array, size);
				i++;
			}
		}
		swap(&array[i], &array[high]);
		print_array(array, size);

		quickSortAlgo(array, low, i - 1, size);
		quickSortAlgo(array, i + 1, high, size);

	}
}

/**
 * swap - a swap function
 * @a: apointer to first array
 * @b: a pointer to second array
 * Return: no return
 */

void swap(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
