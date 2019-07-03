#include "holberton.h"
/**
 *puts_half - print half of a string
 *@str : poionter variable
 *
 *
 */

void puts_half(char *str)
{
	int i, m;
	char l;

	for (i = 0; str[i] != '\0'; i++)

	{
	}
	m = (i + 1) / 2;
	for (; str[m] != 0; m++)
	{
		l = str[m];
		_putchar(l);
	}
	_putchar('\n');
}
