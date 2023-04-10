#include "main.h"

/**
 * generate_file - creates a file
 * @file_name: name of the file to create
 * @text: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int generate_file(const char *file_name, char *text)
{
	int file_desc, write_status;
	size_t length = 0;

	if (!file_name)
		return (-1);

	file_desc = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text)
	{
		while (text[length])
			length++;

		write_status = write(file_desc, text, length);

		if (write_status == -1 || write_status != (ssize_t)length)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
