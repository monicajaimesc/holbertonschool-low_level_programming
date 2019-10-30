#include "sort.h"

/**
 * bubble_sort - sorts a integer array using Buble sort
 *@array: array of integers to be printed
 *@size: number of elements in @array
 * Return: nothing, is a void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temporal;

	for (j = 0; j < size; j++)
	{
		for (i = 1; i <= (size - 1); i++)
		{  /* if this pair is out of order */
			if (array[i - 1] > array[i])
			{
				temporal = array[i - 1];
				/* swap them and remember something changed */
				array[i - 1] = array[i];
				array[i] = temporal;
				print_array(array, size);
			}
		}
	}
}
