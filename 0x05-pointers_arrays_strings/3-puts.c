#include "holberton.h"

/**
* _puts - function that prints a string
*@str: pointer variable
* Return: nothing
*/

void _puts(char *str)

{
	int printstr, count;

	count = _strlen(str);

	for (printstr = 0; printstr < count; printstr++)

	{
		_putchar(str[printstr]);
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
