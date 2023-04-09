#include 'main.h'

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to string containing binary number
 *
 * Return: converted number, or 0 if b is NULL or contains non-binary chars.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			result <<= 1;
			result |= (*b - '0');
			b++;
		}
		else
			return (0);
	}

	return (result);
}
