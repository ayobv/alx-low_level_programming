#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - To Read a text and prints to stdout
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 * Return: Number of bytes read printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ayo;
	char *vic;
	ssize_t rd, wrt;

	if (!filename)
		return (0);

	ayo = open(filename, O_RDONLY);
	if (ayo == -1)
		return (0);

	vic = malloc(sizeof(char) * letters);
	if (!vic)
		return (0);

	rd = read(ayo, vic, letters);
	if (rd == -1)
	{
		free(vic);
		close(ayo);
		return (0);
	}

	wrt = write(STDOUT_FILENO, vic, rd);
	free(vic);
	close(ayo);

	return (wrt == rd ? wrt : 0);
}
