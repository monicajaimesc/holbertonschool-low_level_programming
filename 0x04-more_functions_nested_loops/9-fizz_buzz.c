#include "holberton.h"
#include <stdio.h>

/**
  * main  - program that prints the number from 1 to 100
  *
  * Return: 0
  *
  */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			if (a % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("Fizz");
			}
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", a);
		}
		if (a != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
return (0);
}
