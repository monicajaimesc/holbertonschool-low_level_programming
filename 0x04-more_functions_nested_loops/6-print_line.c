#include "holberton.h"

/**
 * print_line - draw a straight line
 *@n: value to use
 * Return: Always 0.
 */
void print_line(int n)
{
	int lin;

	lin = 0;
	if (n > 0)
	{
		while (lin < n)
		{
			_putchar(95);
			lin++;
		}
	}
	_putchar('\n');
}
