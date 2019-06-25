#include "holberton.h"

/**
 * print_sing - print_sign.
 *@n: The character to check
 * Return: Always 0.
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
