#include "sort.h"

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
	int temp;

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

					temp = array[j];
					array[j] = array[i];
					array[i] = temp;
					print_array(array, size);
				}
				i++;
			}
		}
		if (i != pivot && array[i] != array[pivot])
		{

			temp = array[i];
			array[i] = array[pivot];
			array[pivot] = temp;
			print_array(array, size);
		}
		quickSortAlgo(array, low, i - 1, size);
		quickSortAlgo(array, i + 1, high, size);
	}
}
