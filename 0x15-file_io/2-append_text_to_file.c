#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text to file end
 * @filename: name of file where it is done
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ayo, ayoret, ayolen = 0;

	if (!filename)
		return (-1);

	ayo = open(filename, O_WRONLY | O_APPEND);
	if (ayo == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[ayolen])
			ayolen++;

		ayoret = write(ayo, text_content, ayolen);
		if (ayoret == -1)
		{
			close(ayo);
			return (-1);
		}
	}

	close(ayo);
	return (1);
}
