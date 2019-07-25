#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 *@a: adding up
 *@b: adding up
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 *@a: minuend
 *@b: subtracting
 *Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 *@a: multiplying
 *@b: multiplier
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 *@a: dividend
 *@b: divider
 *Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)/*operator is none of the above*/
	{
		printf("Error\n"); /*print error & new line*/
		exit(100); /*exit with the status 100*/
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 *@a: number
 *@b: divisior
 *Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

