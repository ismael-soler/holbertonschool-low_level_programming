#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: pointer to the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w_out, r_out;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDWR, 0600);
	if (fd == -1)
	{
		return (0);
	}

	r_out = read(fd, buffer, letters);
	w_out = write(STDOUT_FILENO, buffer, r_out);

	close(fd);

	return (w_out);
}
