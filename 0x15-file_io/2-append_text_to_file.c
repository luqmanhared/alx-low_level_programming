#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a new file with the given name and writes the given content to it.
 * @filename: A pointer to a string containing the name of the file to create.
 * @content: A pointer to a string containing the content to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *content)
{
    int file_descriptor, bytes_written, content_length = 0;

    if (filename == NULL)
        return (-1);

    if (content != NULL)
    {
        content_length = strlen(content);
    }

    file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (file_descriptor == -1)
        return (-1);

    bytes_written = write(file_descriptor, content, content_length);

    if (bytes_written == -1)
    {
        close(file_descriptor);
        return (-1);
    }

    close(file_descriptor);
    return (1);
}
