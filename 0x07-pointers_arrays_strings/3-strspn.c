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
	int i = 0;
	int k = 0;
	int j;
	unsigned int cont = 0;

	while (accept[i] != '\0')
	{
		i++;
	}

	k = i;
	for (j = 0; j <= k; j++)
	{
		for (i = 0; i < k; i++)
		{
			if (s[j] == accept[i])
			{
				cont = cont + 1;
			}
		}
	}
return (cont);
}
