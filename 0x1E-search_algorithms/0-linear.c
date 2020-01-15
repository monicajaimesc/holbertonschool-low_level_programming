#include "search_algos.h"
/**
 * linear_search - function that searches for values in a sorted array
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: value to search for
 * Return: the index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (value && array == NULL)
		return (-1);

	while (index != size)
	{
		printf("Value checked array[%lu] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);

		index++;
	}
	return (-1);

}
