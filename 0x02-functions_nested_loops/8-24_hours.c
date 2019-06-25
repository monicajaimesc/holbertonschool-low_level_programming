#include "holberton.h"

/**
 * jack_bauer - print every minute of Jack Bauer day
 *
 * Return: nothing
 */

void jack_bauer(void)

{

int a, b, c, d;

	for (a = 0; a <= 2 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			for (c = 0 ; c <= 5 ; c++)
			{
				for (d = 0 ; d <= 9 ; d++)
				{
					if ((a == 2) && (b > 3))
					{
						break;
					}
					else
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
