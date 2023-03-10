#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/* Ignore unused parameter */
	(void) argv;

	/* Print number of arguments minus program name */
	printf("%d\n", argc - 1);

	/* Return success */
	return (0);
}
