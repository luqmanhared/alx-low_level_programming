#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * create_file_alt - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file_alt(const char *filename, char *text_content)
{
	FILE *file_ptr;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	file_ptr = fopen(filename, "w");
	if (file_ptr == NULL)
		return (-1);

	if (text_content != NULL)
	{
		if (fwrite(text_content, sizeof(char), len, file_ptr) != len)
		{
			fclose(file_ptr);
			return (-1);
		}
	}

	fclose(file_ptr);

	return (1);
}
