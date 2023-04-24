#include "sort.h"

/**
 * bubble_sort - a function that uses
 * a bubble sort method to sort an array.
 *
 * @array: a pointer to an array
 * @size: a size of the array
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{

	int temp;
	size_t i, j;

	if (size >= 2)
	{
		
		for (i = 0; i < size - 1; i++)
		{
			
			for (j = 0; j < size - i - 1; j++)
			{
				
				if (array[j] > array[j + 1])
				{
					
					temp = array[j + 1];
					array[j + 1] = array[j];
					array[j] = temp;
					print_array(array, size);
				}
			}
		}
	}
}
