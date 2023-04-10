#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/* Function prototypes */
int _putchar(char c);
ssize_t read_textfile_mod(const char *filename, size_t letters);
int create_file_mod(const char *filename, char *text_content);
int append_text_to_file_mod(const char *filename, char *text_content);

#endif /* MAIN_H */
