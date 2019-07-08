#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - string for any of a set of a set of bytes
 * @s : pointer string 1
 * @accept : pointer string 2 (small)
 * Return: p
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
return (s + i);
}
