#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - select correct function to perform operation
 *@s: operator passed as argument to the program
 *Return: a pointer to the function to the operator given
 *as a parameter
 */
int (*get_op_func(char *s))(int, int)
{ /*array of structure of op_t and it has 2 members*/
 /*char *op and int *f (int, int)*/
	op_t ops[] = {
	/*0*/	{"+", op_add}, /*+ is an string */
	/*1*/	{"-", op_sub},
	/*2*/	{"*", op_mul},
	/*3*/	{"/", op_div},
	/*4*/	{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	i++;
	}
	printf("Error\n");
	exit(99);
}i
/*function that will return a pointer a una funcion que recibe dos parametros y esa funcion me retorna un int*/
