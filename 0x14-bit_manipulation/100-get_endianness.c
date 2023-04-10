#include "main.h"

/**
 * get_endianness - determines the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *n = (char *)&m;

	return (*n);
}
