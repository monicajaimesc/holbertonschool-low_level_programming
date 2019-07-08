#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - copy memory area
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 * @n : bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char **p;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	p = &dest;
return (*p);
}
