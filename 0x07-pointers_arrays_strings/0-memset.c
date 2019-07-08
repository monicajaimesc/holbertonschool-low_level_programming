#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s : pointed to by s with the constant byte b
 * @b : constant byte
 * @n : size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}

return (s);
}
