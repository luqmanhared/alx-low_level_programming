#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and writes its content to the standard output.
 * @filename: Name of the text file to read.
 * @num_letters: Maximum number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or
 *         0 if the function fails or the filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	char *buffer;
	ssize_t file_desc, read_letters, printed_letters;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	buffer = malloc(sizeof(char) * num_letters);
	read_letters = read(file_desc, buffer, num_letters);
	printed_letters = write(STDOUT_FILENO, buffer, read_letters);

	free(buffer);
	close(file_desc);

	return (printed_letters);
}
