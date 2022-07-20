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
		printf("Usage: cp file_from file_to\n");
		return (97);
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
	int source_fd, dest_fd, close_ret;
	char *buffer;

	source_fd = open(file_from, O_RDONLY, 0600);
	if (source_fd == -1)
		printf("Error: Can't read from file %s\n", file_from), return (98);
	dest_fd = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (dest_fd == -1)
		printf("Error: Can't write to %s\n", file_to), return (99);

	buffer = malloc(sizeof(char) * strlen(file_from));
	if (buffer == NULL)
		return (-1);

	close_ret = close(source_fd);
	if (close_ret != 0)
	{
		printf("Error: Can't close fd %i\n", source_fd)
		return (100);
	}
	close_ret = close(dest_fd);
	if (close_ret)
	{
		printf("Error: Can't close fd %i\n", dest_fd);
		return (100);
	}
}

