#include "holberton.h"

/**
 * _sqrt_recursion - natural square of a number
 *@n : number
 *
 * Return: n and function
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else 
		return (auxiliar(2, n));	

}

/**
 * auxiliar - base
 * @n : number
 * @base : base
 * return : auxliar and -1;
 */

int auxiliar(int base, int n)
{
	if ((base * base) == n)
		return (base);

	if ((base * base) < n)
		return (auxiliar(base + 1, n));
	else
		return (-1);
}

