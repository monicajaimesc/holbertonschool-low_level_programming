#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring
 * @s : string
 * @accept : coincident
 * Return: cont
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count;

	count = 0;
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}

			if (accept[i + 1] == '\0')
			{
				return (count);
			}

		}
		s++;
	}
return (count);
}
