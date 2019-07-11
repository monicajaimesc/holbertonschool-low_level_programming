#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - primer number
 *@n : number
 *
 * Return: prime number or not (1 and 0)
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else
		return (denominator(2, n));

}

/**
 * denominator - denominator 
 *@n: number
 *@den: denominator
 * Return: it's or not 
 */

int denominator(int den, int n)
{
	if (den == n)
		return (1);
	if (n % den == 0)
		return (0);
	else
		return (denominator(n, den + 1));

}
