#include "holberton.h"

/**
* print_triangle - print a triangle
*@size: size of triangle
*
* Return: Always 0 (Success)
*/
void print_triangle(int size)
{
	int a, b, num, esp;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			num = a + 1;
			for (b = size - 1; b < size; b++)
			{
				esp = size - num;
				while (esp > 0)
				{
					_putchar(32);
					esp--;
				}
				while (num > 0)
				{
					_putchar(35);
					num--;
				}
			}
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
