#include "holberton.h"

/**
 * print_last_digit - prints last digit of number
 * @n: number to print last digit (r) of
 *
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = n* -1;
	}
	r = n % 10;
	_putchar(r + '0');
	return (r);
}
