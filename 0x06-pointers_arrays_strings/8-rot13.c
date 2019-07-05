#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s : array
 *
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char o[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{

			if (s[i] == a[j])
			{
				s[i] = o[j];
				break;
			}
		}
	}
return (s);
}
