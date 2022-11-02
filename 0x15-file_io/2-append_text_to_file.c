#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: content
 * Return: 1 / -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, i, w;

	if (!filename)
		return (-1);

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			continue;

		w = write(fd, text_content, i);

		if (w == -1)
			return (-1);
	}

	close(fl);

	return (1);
}
