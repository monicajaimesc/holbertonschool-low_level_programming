#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse
 *@s : string
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	char ss = *s;

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(ss);
}
