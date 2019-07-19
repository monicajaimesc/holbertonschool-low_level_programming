#include "holberton.h"
#include <stdlib.h>

/*
 * array_range - creates an array of integers
 *@min : min value of the array
 *@max : max value of the array
 *
 */
int *array_range(int min, int max)
{
int n, n2;
	int *p;
/*generals conditionals given*/
	if (min > max)
		return (NULL);
/*n2 is the n of the newly array*/
	n2 = (max - min) + 1;

/*reserve space in memory*/
	p = malloc(n2 * sizeof(int));
/*verify the space reserved*/
	if (p == NULL)
		return (NULL);

/*traverse the array with integers*/
	for (n = 0; min <= max; n++)
	{
		p[n] = min;
		min++;
	}

return (p);
}
