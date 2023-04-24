#include "sort.h"

/**
 * selection_sort - a function that
 * sorts an anrray using selection sort
 *
 * @array: a pointer to the array
 * @size: the size of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{

	int temp;
	size_t i, j, small;

	if (size >= 2)
	{

		for (i = 0; i < size; i++)
		{

			small = i;
			for (j = i + 1; j < size; j++)
			{

				if (array[j] < array[small])
				{

					small = j;
				}
			}
			temp = array[i];
			array[i] = array[small];
			array[small] = temp;
			print_array(array, size);
		}
	}
}
