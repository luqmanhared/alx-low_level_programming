#include "main.h"

/**
 * create_new_file - Generates a new file.
 * @file_name: A pointer to the name of the file to create.
 * @file_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_new_file(const char *file_name, char *file_content)
{
	int file_descriptor, write_status, content_length = 0;

	if (file_name == NULL)
		return (-1);

	if (file_content != NULL)
	{
		for (content_length = 0; file_content[content_length];)
			content_length++;
	}

	file_descriptor = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(file_descriptor, file_content, content_length);

	if (file_descriptor == -1 || write_status == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
