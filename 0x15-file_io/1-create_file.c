#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"
#include <sys/stat.h>
#include <stdio.h>

/**
 * create_file - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file
 * @text_content: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byte_write;

	if (filename == NULL)
		return (-1);
	fd = open(filename,O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		byte_write = write(fd, text_content, strlen(text_content));
		if (byte_write == -1 || (size_t)byte_write != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

