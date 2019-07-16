#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chard
 *
 *@size: size unsigned int type
 *@c: constant char type
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *b = (char *) malloc(size * sizeof(char));

	if (size == 0 || b == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(b + i) = c;
	}

return (b);
}
