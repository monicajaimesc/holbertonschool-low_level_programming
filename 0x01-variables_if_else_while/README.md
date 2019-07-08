0-positive_or_negative.c
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
The variable n will store a different value every time you will run this program
You don’t have to understand what rand, srand, RAND_MAX do. Please do not touch this code
The output of the program should be:
The number, followed by
if the number is greater than 0: is positive
if the number is 0: is zero
if the number is less than 0: is negative
followed by a new line
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
1-last_digit.c
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
The output of the program should be:
The string Last digit of, followed by
n, followed by
the string is, followed by
if n is greater than 5: the string and is greater than 5
if n is 0: the string and is 0
if n is less than 6 and not 0: the string and is less than 6 and not 0
followed by a new line
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, last);
	}
	if ((last < 6) && (last != 0))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
2-print_alphabet.c
Write a program that prints the alphabet in lowercase, followed by a new line.
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
int main(void)
{
char al;
for (al = 'a' ; al <= 'z' ; al++)
{
	putchar(al);
}
putchar('\n');
return (0);
}
3-print_alphabets.c
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
int main(void)
{
char al;
for (al = 'a' ; al <= 'z' ; al++)
{
putchar(al);
}
for (al = 'A'; al <= 'Z'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
4-print_alphabt.c
Write a program that prints the alphabet in lowercase, followed by a new line.
Print all the letters except q and e
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar twice in your code
int main(void)
{
int a;
for (a = 97; a <= 122; a++)
{
if (a != 113 && a != 101)
{
putchar(a);
}
}
putchar('\n');
return (0);
}
5-print_numbers.c
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
int main(void)
{
int d;
for (d = 0; d < 10; d++)
{
	printf("%d", d);
}
printf("\n");
return (0);
}

6-print_numberz.c
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
You are not allowed to use any variable of type char
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar twice in your cod
int main(void)
{
int d;
for (d = 48; d < 58; d++)
putchar(d);
putchar('\n');
return (0);
}
7-print_tebahpla.c
Write a program that prints the lowercase alphabet in reverse, followed by a new line.
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
int main(void)
{
char c;
for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
8-print_base16.c
Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar three times in your code
int main(void)
{
	char cht;

	for (cht = 0; cht <= 9; cht++)
	{
		putchar(cht % 10 + '0');
	}
	for (cht = 'a'; cht <= 'f' ; cht++)
	{
		putchar(cht);
	}
	putchar('\n');
return (0);
}
9-print_comb.c
Write a program that prints all possible combinations of single-digit numbers.

Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
All your code should be in the main function
You can only use putchar four times maximum in your code
You are not allowed to use any variable of type char
int main(void)
{
	int nu;

	for (nu = 0; nu <= 9; nu++)
	{
		putchar(nu % 10 + '0');
		if (nu != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
10-print_comb2.c
Write a program that prints the numbers from 00 to 99.
Numbers must be separated by ,, followed by a space
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
All your code should be in the main function
int main(void)
{
	int num = 0;

	while (num <= 99)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
putchar('\n');
return (0);
}
100-print_comb3.c
Write a program that prints all possible different combinations of two digits.
Numbers must be separated by ,, followed by a space
The two digits must be different
01 and 10 are considered the same combination of the two digits 0 and 1
Print only the smallest combination of two digits
Numbers should be printed in ascending order, with two digits
You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
You can only use putchar five times maximum in your code
You are not allowed to use any variable of type char
int main(void)
{
	int num, num2;

	for (num = 0 ; num <= 9 ; num++)
	{
		num2 = num + 1;
			while (num2 <= 9)
			{
				putchar (num + '0');
				putchar (num2 + '0');
			if ((num == 8) && (num2 == 9))
			{
				break;
			}
			else
			{
				putchar (',');
				putchar (' ');
			}
			num2++;
			}
	}
	putchar ('\n');
return (0);
}
