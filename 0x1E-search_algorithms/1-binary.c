#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to the first elemento of the array
 * @size: number of the elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int here; /* position */
	int left = 0; /* site */
	int right = (size - 1); /* site */
	int left_init = 0;

	if (value && array == NULL)
		return (-1);

	/* infinite loop */
	while (left <= right)
	{
		printf("Searching in array: ");
		left_init = left;
		while (left_init <= right)
		{
			printf("%i", array[left_init]);
			if (left_init == right)
				printf("\n");
			else
				printf(", ");
			left_init++;
		}
		/* printf("\n"); */
		here = (int)(left + right) / 2;
		/* printf("%i\n", here); */
		if (array[here] < value)
			left = (here + 1);
		else if (array[here] > value)
			right = (here - 1);
		else
			return (here);
	}
	return (-1);
}
