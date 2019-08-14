#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that copies the content of a file to another file.
 * @argc: Filename
 * @argv: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest, status;

