#include "holberton.h"
/*
 * print_times_table - prints the n times table
 *@n: number
 */
void print_times_table(int n)
{
	int i, j;

    /* n is greater than 15 or 
    less than 0 don't print anything */
	i = 0;
	if (n >= 0 && n < 15)
	{
		while (i <= n)
		{
			_putchar('0');
			j = 1;
			while (j <= n)
				formatnumber(i * j++);
			_putchar('\n');
			i++;
		}
	}
}

/**
 * putformatnumber - puts formatted characters to output
 *
 * @n: number to format
 * Return: void
 */
void formatnumber(int n)
{
	if (n < 10)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n >= 10 && n < 100)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}

    /* after 100 */
	else
	{
		_putchar(',');
        _putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
