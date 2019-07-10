#include "holberton.h"

/**
 * _strlen_recursion - length of a string
 *@s : string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		s++;
	return (i + _strlen_recursion(s));
	}

	else
	{
		return (0);
	}
}
