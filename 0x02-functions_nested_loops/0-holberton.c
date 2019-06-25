#include <stdio.h>
#include "holberton.h"

/**
* main - print Holberton in a new line
*
* Return: 0
*/

int main(void)
{
	char *c;
	int i;

	c = "Holberton";

	for (i = 0; i <= sizeof(c); i++)
	{
		_putchar(c[i]);
	}
	_puthcar('\n');
	return (0);
}
