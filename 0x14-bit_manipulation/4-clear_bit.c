#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer that helps to set a value in a specific index
 *@index: index starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int clear;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	clear = ~(1 << index); /*find the number and set bit to 0*/
	*n = *n & clear; /* & set 0 in the given index*/
	return (1);

}
