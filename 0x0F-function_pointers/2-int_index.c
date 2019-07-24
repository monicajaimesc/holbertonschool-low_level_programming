#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array pointer
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the firt element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	/* function exist? if given */
	/* size <= 0 both return -1 */
	if (!cmp || !array || size <= 0)
		return (-1);
	/* find array size */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0) /*referencing*/
			return (i); /*different of 0*/
	/*referenging and compare with cmp*/

	}
	return (-1); /* when it doesn't match return -1 */
}

