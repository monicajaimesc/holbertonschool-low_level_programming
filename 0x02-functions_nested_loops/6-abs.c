#include "holberton.h"

/**
 *_abs - computes the absolute value of an integer
 *@a: integer to computer
 * Return: absolute value;
 */

int _abs(int a)

{
	if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
}
