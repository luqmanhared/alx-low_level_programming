#include "main.h"

/**
 * binary_to_dec - converts a binary number to unsigned integer
 * @bin_str: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_dec(const char *bin_str)
{
	int idx;
	unsigned int decimal_val = 0;

	if (!bin_str)
		return (0);

	for (idx = 0; bin_str[idx]; idx++)
	{
		if (bin_str[idx] < '0' || bin_str[idx] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (bin_str[idx] - '0');
	}

	return (decimal_val);
}
