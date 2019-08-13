#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard ouput
 *@filename: name of the files
 *@letters: # of letters it should read and print
 *
 *Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*open variable -file descritor */
	char *buffer;
	int letters2; /*size_t data type 8 bytes*/

	fd = open(filename, O_RDONLY); /*open file just lecture*/

	if (fd == -1) /*if it fails*/
		return (0);

	buffer = malloc(sizeof(char) * letters);/*reseve dynamic memory(l*l)*/

	if (buffer == NULL)
		return (0);
/*attempts to read up to count bytes from fd into the buffer*/
	letters2 = read(fd, buffer, letters);
/* writes up to count bytes from the buffer pointed to the fd*/
	if (write(STDOUT_FILENO, buffer, letters2) != letters2)/*output*/
		return (0);

	free(buffer);
	close(fd);

return (letters2);
}
