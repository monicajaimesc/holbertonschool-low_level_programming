#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/*
 *print_close - error printed
 *@file: file
 */
void print_close(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
	exit(100);
}

/* 
 *print_write - print write errr
 *@file: file to be printed
 */
void print_write(char *file)
{ 
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/*
 *print_read - error printed
 *@file: file to be printed
 */
void print_read(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * main - function that copies the content of a file to another file.
 * @argc: Filename
 * @argv: Text to add to the file.
 *
 * Return: 1 - Success or -1 - Failure.
 */
int main(int argc, char **argv)
{
	int fd_read, fd_write, fd_from, fd_to, fd_close;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}		
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_read(argv[1]);
	
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		print_write(argv[2]);
		
	while(fd_read == 1024)
	{
		fd_read = read(fd_from, buffer, 1024);
		if (fd_read == -1)
			print_read(argv[1]);
			
		fd_write = write(fd_to, buffer, fd_read);
		if (fd_write == -1)
			print_write(argv[2]);
	
	}
	
	fd_close = close(fd_from);
		if (fd_close == -1)
			print_close(argv[1]);
	
	fd_close = close(fd_to);
		if (fd_close == -1)
			print_close(argv[2]);

	return (0);
}
