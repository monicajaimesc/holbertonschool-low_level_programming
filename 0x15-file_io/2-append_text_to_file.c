#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - reads a txt file and prints ittothePOSIXstandard ouput
 *@filename: name of the files
 *@text_content: is the NULL terminated string to add at the end ofthefile
 *
 *Return: 1 on succes and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len, size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_RDWR, 0600);
/*If text_content is NULL, do not add anything to the file*/
/*Return 1 if the file exists and -1 if the file does not exist*/
 /*or if you do not have the required permissions to write the file*/

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	size = write(fd, text_content, len);

		if (size == -1) /*if fails*/
		{
			return (-1);
		}
	}
		close(fd);
		return (1);
	return (1);
}
