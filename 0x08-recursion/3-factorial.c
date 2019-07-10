#include "holberton.h"

/**
 * factorial - factorial of a given number
 *@n : number
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
return (n * factorial(n - 1));
}
