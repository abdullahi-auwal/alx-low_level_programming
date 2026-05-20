#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - cp from a file to another file
 * @ac: arguments cunt
 * @av: pointer to an array of arguments
 *
 * Return: 1 on success
 */
int main(int ac, char **av)
{
	int n, fc1, fc2, fd_fileto, fd_filefrom, read_byte;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit (97);
	}
	
	fd_filefrom = open(av[1], O_RDONLY);
	if (fd_filefrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_fileto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_fileto == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((read_byte = read(fd_filefrom, buff, 1024)) > 0)
	{
		n = write(fd_fileto, buff, read_byte);
		if (n == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (read_byte == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(fd_filefrom);
		close(fd_fileto);
		exit(98);
	}
	fc1 = close(fd_fileto);
	if (fc1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_fileto);
		exit(100);
	}
	fc2 = close(fd_filefrom);
	if (fc2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_filefrom);
		exit(100);
	}
	return (0);
}
