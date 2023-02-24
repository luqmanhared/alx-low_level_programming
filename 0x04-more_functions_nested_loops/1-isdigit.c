#include "main.h"
/**
 * _isdigit - check for digit 0 to 9
 * @c: argument
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
