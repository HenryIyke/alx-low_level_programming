#include <stdio.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file to be created
 * @text_content: Content of the file
 *
 * Return: 1 0n success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, rcheck, x;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rcheck = write(fd, text_content, i);
		if (rcheck == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
