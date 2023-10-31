#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that copies the content
 * of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success and -1 on error
 */
int main(int argc, char *argv[])
{
	int fd, fd2;
	char buff[1024];
	ssize_t cpy1, cpy2;

	if (argc < 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}
	cpy1 = read(fd, buff, sizeof(buff));
	if (cpy1 == -1)
	{
		close(fd);
		return (-1);
	}
	fd2 = open(argv[2], O_RDWR | O_TRUNC);
	if (fd2 == -1)
		open(argv[2], O_RDWR | O_CREAT, 0664);
	cpy2 = write(fd2, buff, strlen(buff));
	if (cpy2 == -1)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n",fd);
		exit(100);
	}
	close(fd);
	return (1);
}
