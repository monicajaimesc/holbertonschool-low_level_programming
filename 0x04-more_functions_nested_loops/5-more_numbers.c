#include "holberton.h"

/**
 *more_numbers - prints 10 times the number, from 0 to 14
 *
 *
 * Return: no return
 */
void more_numbers(void)

{
int n, j;

	for (j = 0; j <= 9; j++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
		_putchar((n % 10) + '0');
		}
	_putchar('\n');
	}
}
