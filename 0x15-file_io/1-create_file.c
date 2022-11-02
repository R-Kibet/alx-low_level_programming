#include "main.h"

/**
 * create_file - function that create a file
 * @filename: filename
 * @text_content: content in the tet
 * Return: file context
 */

int create_file(const char *filename, char *text_content)
{
	int fl, w, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (i = 0 ; text_content[i]; i++)
		continue;

	fl = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fl == -1)
	{
		return (-1);
	}

	w = write(fl, text_content, i);

	if (w == -1)
		return (-1);
	close(fl);
	return (1);
}
