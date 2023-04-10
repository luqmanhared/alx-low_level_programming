#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * insert_text_to_file_tail - Adds text to the end of a file.
 * @file_name: A pointer to the name of the target file.
 * @text_to_append: The string to be appended at the end of the file.
 *
 * Return: If the function encounters a failure or file_name is NULL - -1.
 *         If the file is non-existent or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int add_text_to_file_end(const char *file_name, char *text_to_append)
{
	FILE *file_handle;
	size_t text_length = 0;

	if (file_name == NULL)
		return (-1);

	if (text_to_append != NULL)
	{
		text_length = strlen(text_to_append);
	}

	file_handle = fopen(file_name, "a");
	if (file_handle == NULL)
		return (-1);

	if (text_to_append != NULL)
	{
		if (fwrite(text_to_append, sizeof(char), text_length, file_handle) != text_length)
		{
			fclose(file_handle);
			return (-1);
		}
	}

	fclose(file_handle);

	return (1);
}
