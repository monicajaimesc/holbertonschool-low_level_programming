#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - function that creates a file
 *
 *@filename: name of the file to create
 *@text_content: text contentt
 *Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size_bytes;
	int len = 0;

	if (filename == NULL)
		return (-1); /*given*/
/*Create a file, text contet is  null(given), writeonly, permission rw--*/
/*where filename is the name of the file to create*/
/*and text_content is a NULL terminated string to write to the file*/

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);/*on failure*/

	if (text_content == NULL)
	{
		while (len != '\0')
		{
/*file descriptor, pointer to a buffer, number bytes to write*/
			len++;
			size_bytes = write(fd, text_content, len);

			if (size_bytes == -1) /*on failure*/

				write(STDOUT_FILENO, "fails", 6);
				return (-1);

		}
	}
	close(fd);
	return (1);
}
