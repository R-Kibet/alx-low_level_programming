#include "main.h"

/**
 * read_textfile - read at text file and prints it out
 * @filename: name of file
 * @letters: size of file
 * Return: file and size
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl;
	char *buf;
	ssize_t rd, wr;

	fl = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fl != -1)
	{
		buf = malloc(sizeof(char) * (letters));

		if (!buf)
			return (0);

		rd = read(fl, buf, letters);
		wr = write(STDOUT_FILENO, buf, rd);
	}
	else
	{
		return (0);
	}
	close(fl);
	free(buf);
	return (wr);
}
