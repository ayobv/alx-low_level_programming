#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file and writes text inside
 * @filename: file name to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ayo, des, vic = 0;

	if (!filename)
		return (-1);

	ayo = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (ayo == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[vic])
			vic++;

		des = write(ayo, text_content, vic);
		if (des == -1)
		{
			close(ayo);
			return (-1);
		}
	}

	close(ayo);
	return (1);
}
