#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: the text file
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters it could read & print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t n_written, n_read;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, buff, letters);
	if (n_read == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	n_written = write(1, buff, n_read);
	if (n_written == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (n_written);
}
