#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 *@n: unsigned long int
 *@index: leng is index
 *Return: the value of the bit at index or -1 if an error ocurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64) /*max value of an unsigned long int*/
		return (-1); /*if it's more of 64 don't print*/

	n >>= index;

	if ((n & 1) == 1)/* binary moved & 1 is equal to 1, first example*/
		return (1);/*print previosly*/
	else
		return (0);


}
