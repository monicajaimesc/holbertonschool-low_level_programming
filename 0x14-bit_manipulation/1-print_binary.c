#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 *@n: number
 *
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
/*third, least than 2 is 0 and 1, print it and return*/
	if (n < 2)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 0x01); /*primero, recursion, move to the right*/
/*second,do the division (see example) & convert the binary to a number + '0'*/
	_putchar((n & 0x01) + '0');
	/*example, var=3; >>4 -> 3/2 a la 4*/
}
