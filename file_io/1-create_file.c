#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t fd;

	if (filename == NULL)
		return (-1);

	fd = creat(fd, 0600);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	return (1);
}
