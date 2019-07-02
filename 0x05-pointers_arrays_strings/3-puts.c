#include "holberton.h"

/**
* _puts - function that prints a string
*@str: pointer variable
* Return: nothing
*/

void _puts(char *str)

{
	int printstr;

	while (str[printstr])

	{
		_putchar(str[printstr]);
		printstr++;
	}
_putchar('\n');
}
