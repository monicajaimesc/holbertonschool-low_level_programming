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
/**
 * flip_bits - # of bits you would need to flip to get from one # to another
 * @n: list to print
 * @m: index to return
 *
 * Return: Always 0.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	int j = 0, k;

	k = sizeof(unsigned long int) * 8;

	for (j =  k - 1; j >= 0; j--)
	{
		if (get_bit(n, j) ^ get_bit(m, j))
			flip += 1;
	}
return (flip);
}

