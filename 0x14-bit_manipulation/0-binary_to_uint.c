#include "main.h"

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: pointer to string containing binary number
 *
 * Return: converted number, or 0 if b is NULL or contains non-binary chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		num <<= 1;
		if (*b == '1')
			num |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}

	return (num);
}
