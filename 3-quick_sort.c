#include "sort.h"

/**
 * swap - a swap function
 * @a: a pointer
 * @b: another pointer
 * Return: no return
 */

void swap(int *a, int *b)
{

	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
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

	int pivot, i, j;

	if (low < high)
	{

		pivot = high;
		i = low;
		for (j = low; j < high; j++)
		{

			if (array[j] < array[pivot])
			{

				if (j != i)
				{

					swap(&array[i], &array[j]);
					print_array(array, size);
				}
				i++;
			}
		}
		if (i != pivot && array[i] != array[pivot])
		{

			swap(&array[i], &array[pivot]);
			print_array(array, size);
		}
		quickSortAlgo(array, low, i - 1, size);
		quickSortAlgo(array, i + 1, high, size);
	}
}


/**
 * quick_sort - a fuction for the quick
 * sort algorithm
 *
 * @array: a pointer to an array
 * @size: size of the array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{

	if (size >= 2)
	{

		quickSortAlgo(array, 0, size - 1, size);
	}

}
