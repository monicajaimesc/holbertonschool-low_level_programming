#include "holberton.h"

/**
 * memset - fills memory with a constant byte
 * @s : pointed to by s with the constant byte b
 * @b : constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

return (s);
}
