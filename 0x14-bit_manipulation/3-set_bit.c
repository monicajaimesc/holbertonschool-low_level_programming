#include "holberton.h"
/**
 *set_bit - sets the value of a bit to 1 at a given index
 *@n: pointer that change the value in a specific address
 *@index: index starting from 0
 *Return: 1 if it worked of -1 if an error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int set;
/*could be 64 * 8 as well*/

	if (index > (sizeof(unsigned long int) * 8))/*8 bytes * 8 bites*/
		return (-1);

	set = 1 << index; /*go throught the index and set 1 bit in the position*/
	*n = *n | set; /*| set everything to the equal number*/
	return (1);

}
