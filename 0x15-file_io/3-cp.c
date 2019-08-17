#include "holberton.h"
#define BUF_SIZE 1024

/**
 * main - contaign a function to cp file
 * @arc: arguments
 * @arv: string
 *
 * Return: 0 to success
 */

int main(int arc, char **arv)
{
	int size_to, size_from, file_to, file_from, close_file;
	char buf[BUF_SIZE];

	if (arc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from fileto\n"), exit(97);

	file_to = open(arv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]), exit(99);

	file_from = open(arv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);

	size_from = read(file_from, buf, BUF_SIZE);
	if (size_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]), exit(98);

	size_to = write(file_to, buf, size_from);
	if (size_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]), exit(99);

	while (size_from == 1024)
	{
		size_from = read(file_from, buf, BUF_SIZE);
		size_to = write(file_to, buf, size_from);
	}

	close_file = close(file_from);

	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	close_file = close(file_to);
	if (close_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}


