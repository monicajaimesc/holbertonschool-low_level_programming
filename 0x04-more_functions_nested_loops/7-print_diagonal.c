#include "holberton.h"

/**
 * print_diagonal - draw a diogonal.
 *@n: value to use
 * Return: Always 0.
 */
void print_diagonal(int n)

{
	int lin, esp;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (lin = 0; lin < n; lin++)
		{
			if (lin > 0)
			{
				for (esp = 0; esp < lin; esp++)
				{
					_putchar(32);
				}
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
