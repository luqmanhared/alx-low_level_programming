#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file and writes in it content specified
 * @filename: name of the file to create
 * @text_content: null-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, status;
	size_t content_length;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		status = write(file_desc, text_content, content_length);

		if (status == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
