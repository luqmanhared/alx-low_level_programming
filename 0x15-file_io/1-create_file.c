#include "main.h"

/**
 * create_file - Generates a new file and writes content to it
 * @filename: A pointer to the string representing name of the file to create
 * @text_content: A pointer to the string that will be written to the new file
 *
 * Return: Returns -1 if an error occurs, 1 if the it executes successfully
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(file_descriptor, text_content, length);

	if (file_descriptor == -1 || write_status == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
