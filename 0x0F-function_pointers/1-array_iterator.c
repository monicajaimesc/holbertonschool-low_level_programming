#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - ftn that exe a fctn given as para on each array element
 * @array: array of pointers
 * @size: size of an array element
 * @action: pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!action || !array || size < 1) /*if the function exist do it*/
		return;

	for (i = 0; i < size; i++) /*find the array size */
	{
		action(array[i]); /*deferencing &printelement&hexa*/
	}



}
