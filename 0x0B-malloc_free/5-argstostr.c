#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	{
		return (count);
	}
}

/**
 * argstostr - Concatenates all the arguments of your program.
 *
 * @ac: count
 * @av: values
 *
 * Return: pointer should point to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int i, j, sum = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		sum += _strlen(*(av + i));
	p = malloc(sizeof(char) * (sum + ac + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (i = 0; i < _strlen(*(av + j)); i++)
		{
			p[count] = *(*(av + j) + i);
			count++;
		}
		p[count] = '\n';
		count++;
	}
	p[count] = '\0';
	return (p);
}

