#include "main.h"

/**
 * main - main call
 * @ac: arguments count
 * @av: arguments as strings
 * Return: 0
 */

int main(int ac, char **av)
{
	int ret;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ret = copy(av[1], av[2]);
	return (ret);
}

/**
 * copy - copies the content of a file to another file
 * @file_from: source file
 * @file_to: destination file
 * Return: 0
 */

int copy(const char *file_from, const char *file_to)
{
	int source_fd, dest_fd, close_ret, r_out, w_out;
	char *buffer;

	(void) w_out;
	source_fd = open(file_from, O_RDONLY);
	if (source_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	dest_fd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR
		| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		return (99);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (-1);
	r_out = 1024;
	for (; r_out == 1024;)
	{
		r_out = read(source_fd, buffer, 1024);
		if (r_out == -1)
		{
			dprintf(STDERR_FILENO, "Error Can't read from file %s\n", file_from);
			return (98);
		}
		if (write(dest_fd, buffer, r_out) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			return (99);
		}
	}

	close_ret = close(source_fd);
	if (close_ret != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", source_fd), exit(100);
	}
	close_ret = close(dest_fd);
	if (close_ret)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", dest_fd), exit(100);
	}
	return (0);
}
