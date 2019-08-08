#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	if (b == 0)/*evaluating condition given*/
		return (0);
	result = 0;
	while (*b != '\0') /*going through of the string*/
	{
		if (*b != '0' && *b != '1') /*evaluationg condition given*/
			return (0);
/*if b is pointer to first character '1'*/
		if (*b == '1')
/*result is equal to sum * base 2 (always) + 1 to go thought to the binary 1*/
			result = result * 2 + 1;
		else
/*result is equal to sum * base 2 (always) + 0 to go throught binary 0*/
			result = result * 2 + 0;
		b++;
	}

return (result);

}
