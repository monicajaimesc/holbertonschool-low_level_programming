#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 *
 *@str : pointer variable
 *
 */

void puts2(char *str)
{
	int i;
	char l;
	
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i %2 == 0)
		{
			l = str[i];
			_putchar(l);
		}
	}

	_putchar('\n');
}
