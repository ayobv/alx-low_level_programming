#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>
/**
 * main - Copies contents of one file to another.
 * @ac: Argument count.
 * @av: Argument values.
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, len_read;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]),
			exit(99);
	while ((len_read = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, len_read) != len_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (len_read < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]),
			exit(98);
	if (close(fd_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from),
			exit(100);
	if (close(fd_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to),
			exit(100);
	return (0);
}
