#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: The character to check
 *
 * Return: 1 and prints + if n is positive
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and print - of n is negative
 */

int print_sign(int n)

{
	int i;

	if (n > 0)

	{
		i = 0;
		_putchar(43);
	}
	else if (n < 0)
	{
		i = -1;
		_putchar(45);
	}
	else
	{
		i = 0;
		_putchar(48);
	}
return (i);
}
