#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: amount of args
 * @argv: arguments
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int result;
	int (*ptr) (int, int);
	if (argc != 4)
	{
		printf("Error\n");
		return (98);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if (argv[2] == % || argv[2] == /)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

	result = ptr(atoi(argv[1], atoi(argv[3]));
	
	printf("%d\n", result);
	return (0);
}
