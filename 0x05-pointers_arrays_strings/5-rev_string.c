#include "holberton.h"
#include <string.h>

/**
* rev_string - function that reverses a string
*@s: pointer variable
*
*/
void rev_string(char *s)

{
	int count, c;
	char l;

	for (count = 0 ; s[count] != '\0'; count++)
	{
	}
	count--;
	for  (c = 0 ; c < count ; c++)
	{
		l = s[count];
		s[count] = s[c];
		s[c] = l;
		count--;
	}
}


