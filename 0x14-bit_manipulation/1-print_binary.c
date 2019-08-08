#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 *@n: number
 *
 *Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int index, counter = 0;

	if (n == 0)
	{
		_putchar ('0');/*0 binary evaluation*/
		return;
	}

	if (n == 1)
	{
		_putchar('1');/*1 binary evaluation*/
		return;
	}
	/*convertion to binary number*/
	index = 2; /*always is 2*/

	while (index <= n && counter < 62) /* 62 because we're working in machine 64*/
	{
		index <<= 1; /* move one to left*/
		counter++; /*save the result*/
	}
	if (counter != 62)
		index >>= 1; /*move one position to the right*/

	while (index != 0)
	{
		if ((index & n) != 0)/*do the & evaluation, 1 1 = 1*/
		{
			_putchar('1');
			counter++;
		}
		else
		{
			_putchar('0'); /*do the 0 evaluation*/
			counter++;
		}
		index >>= 1;
	}
}
