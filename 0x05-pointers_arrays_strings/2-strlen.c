#include "holberton.h"
#include <string.h>

/**
* _strlen - returns the length of a string
*@s: pointer variable
* Return: nothing
*/
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;
	{
		return (count);
	}
}

