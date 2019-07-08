0. preprocesor 
 Write a script that runs a C file through the preprocessor and save the result into another file.
- The c file name will be saved in the variable $CFILE
- The output should be saved in the file c 
#!/bin/bash
gcc -E$CFILE > c
1. compiler
Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
#!/bin/bash
gcc -c $CFILE > 0
3. Name
Write a script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE
#!/bin/bash
gcc -c $CFILE > cisfun
4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts
You are not allowed to use printf
Your program should end with the value 0
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
puts("\"Programming is like building a multilingual puzzle");
return (0);
}
5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option
int main(void)
{
printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of an int: %lu byte(s)\n", sizeof(int));
printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", sizeof(float));
return (0);
`
