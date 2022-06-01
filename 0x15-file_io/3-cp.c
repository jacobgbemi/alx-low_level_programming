#include "main.h"

/**
 * close_file - closes file descriptors
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int num = close(fd);

	if (num == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	fd1 = open(argv[1], O_RDONLY);
	r = read(fd1, buffer, 1024);

	while (r != 0)
	{
		if (r == -1 || fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(fd2, buffer, r);
		if (w == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd1, buffer, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);

	}
	free(buffer);
	close_file(fd2);
	close_file(fd1);
	return (0);
}
