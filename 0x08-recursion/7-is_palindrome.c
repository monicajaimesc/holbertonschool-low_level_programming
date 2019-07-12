#include "holberton.h"
#include <stdio.h>

/**
 * lenght - Calculate the lenght of a string
 * @s: The array to evaluate
 *
 *
 * Return: lenght
 *
 */
int lenght(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + lenght(++s));
}

/**
 * palindrome - it is a palindrome yes or not (1 and 0)
 *
 * @s: string
 * @counter: counter
 * Return: 0 or 1.
 *
 */

int palindrome(int counter, char *s)
{

	if (*s == '\0')
		return (1);

	if (*s != *(s + lenght(s) - counter))
		return (0);
	else
		return (palindrome(++counter, ++s));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 *
 * @s: string
 * Return: 1 for yes 0 for no.
 *
 */
int is_palindrome(char *s)
{
	return (palindrome(1, s));
}
