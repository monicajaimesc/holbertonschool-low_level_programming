#include <stdio.h>
#include "holberton.h"

/**
 * _islower - check for alphabetic character.
 *@c: The character to check
 * Return: Always 0.
 */
int _isalpha(int c)

{

	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}	
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}	 
	else
	{
		return (0);	
	}
}
