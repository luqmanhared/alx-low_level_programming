#include "main.h"

/**
 * create_file - Creates a file with specified permissions and writes the
 *               provided content to the file. If the file exists, it is
 *               truncated.
 * @filename: A pointer to the name of the file to create
 * @text_content: A pointer to a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created, file cannot
 *         be written, write fails, etc.)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status, length = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_status = write(file_descriptor, text_content, length);

		if (write_status == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
