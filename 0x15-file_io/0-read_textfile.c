#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: name of file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t byte_read, byte_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	byte_read = read(fd, buff, letters);
	if (byte_read == -1)
	{
		free(buff);
		close(fd);
		return  (0);
	}
	byte_write = write(STDOUT_FILENO, buff, byte_read);
	if (byte_write == -1 || byte_write != byte_read)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (byte_read);
}
