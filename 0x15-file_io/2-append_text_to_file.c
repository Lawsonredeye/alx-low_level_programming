#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: name of the file to be appended to
 * @text_content: content of filename
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer = text_content;
	ssize_t byte_write;

	if (filename == NULL)
	{
		printf ("a");
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		printf ("b");
		return (-1);
	}
	if (text_content == NULL)
		return (1);
	byte_write = write(fd, buffer, strlen(text_content));
	if (byte_write == -1)
	{
		printf("c");
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
