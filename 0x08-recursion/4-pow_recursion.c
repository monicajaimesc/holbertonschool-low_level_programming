#include "holberton.h"
#include <stdio.h>

/**
 * _pow_recursion - x raised to the power of y
 *@x : value
 *@y : power (raised to)
 * Return: x
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y != 0)
	{ 
		return(x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);

	}
}
