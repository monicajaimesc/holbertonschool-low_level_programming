#include "holberton.h"
#include <stdio.h>

/*
 *print_close - error printed
 *@file: file
 */
void print_close(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
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
	int fd_read, fd_write, fd_close, fd_close_to, fd, size;
	char buffer[1024], *fd_from, *fd_to;
	
	fd_from = argv[1];
	fd_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}		
	fd_read = open(fd_from, O_RDONLY);
	if (fd_read == -1)
		print_read(fd_from);
	
	fd_write = open(fd_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_write == -1)
		print_write(fd_to);
	fd = read(fd_read, buffer, 1024);
		print_read(fd_to);
	if (fd == -1)
		print_read(fd_from);
	size = write(fd_write, buffer, fd);
	if (size == -1)
		print_write(fd_to);
		
	while(fd == 1024)
	{
		fd = read(fd_read, buffer, 1024);
		if (fd == -1)
			print_read(fd_from);
			
		size = write(fd_write, buffer, fd_read);
		if (size == -1)
			print_write(fd_to);
	}
	
	fd_close = close(fd_read);
		if (fd_close == -1)
			print_close(fd_read);
	
	fd_close_to = close(fd_write);
		if (fd_close_to == -1)
			print_close(fd_write);

	return (0);
}
