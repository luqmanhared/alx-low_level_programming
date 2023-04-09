#include "main.h"

/**
 * bin_to_dec - converts a binary number to an unsigned integer
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int bin_to_dec(const char *b)
{
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			dec_val = dec_val * 2 + (*b - '0');
			b++;
		}
		else
			return (0);
	}

	return (dec_val);
}
