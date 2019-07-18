#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 *@b: variable to check
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
/* program termination process with a value */

	return (p);

}

