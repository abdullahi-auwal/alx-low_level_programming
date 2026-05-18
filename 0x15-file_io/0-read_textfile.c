#include <unistd.h>
#include <fcntl.h>
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
	char buff[1024];
	ssize_t count;
	int fd;

	fd = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);
	count = read(fd, buff, letters);
	if (count == -1)
		return (0);

	count = write(1, buff, count);
	if (count == -1)
		return (0);
	return (count);
}
