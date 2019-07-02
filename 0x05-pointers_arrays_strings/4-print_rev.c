#include "holberton.h"

/**
* print_rev - prints a string in reverse
*
*@s: pointer variable
*return: nothing
*/

void print_rev(char *s)
{
	int phrarev, count;

	count = _strlen(s);

	for (phrarev = count; phrarev >= 0; phrarev--)
	{
		_putchar(s[phrarev]);
	}
	_putchar('\n');
}

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count])

	{
		count++;
	}
	return (count);
}
