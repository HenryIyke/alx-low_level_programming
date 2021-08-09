#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO


void file_copy(int src_fd, int dest_fd, char *dest_name);
void close_fd(int fd);


/**
 * main - creates the copy bash script
 * @argc: argument count
 * @argv: argument string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd;

	if (argc != 3)
		dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		close_fd(src_fd);
		dprintf(SE, "Error: Can't read from file %s\n", argv[1]), exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_TRUNC);
	if (dest_fd < 0)
	{
		dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (dest_fd < 0)
			dprintf(SE, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	file_copy(src_fd, dest_fd, argv[2]);
	close_fd(src_fd), close_fd(dest_fd);
	return (0);
}

/**
 * file_copy - Copies the content from one file to another
 * @src_fd: The source file
 * @dest_fd: The destination file
 * @dest_name: Destination filename
 */
void file_copy(int src_fd, int dest_fd, char *dest_name)
{
	int i, c;
	void *buf = malloc(sizeof(char) * MAXSIZE);

	if (!buf)
	{
		for (i = 0; ; i += MAXSIZE)
		{
			c = read(src_fd, buf, MAXSIZE);
			if (c == 0)
				break;
			if (write(dest_fd, buf, c) != c)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_name);
				exit(99);
			}
		}
		free(buf);
	}
}


/**
 * close_fd - closes the file
 * @fd: open file
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
