#include "holberton.h"

/**
* main - print Holberton in a new line
*
* Return: 0
*/

int main(void)
{
	int i;
	char string[9] = "Holberton";

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
