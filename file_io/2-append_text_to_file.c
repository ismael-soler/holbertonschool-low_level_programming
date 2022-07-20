#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_APPEND | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);


	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
