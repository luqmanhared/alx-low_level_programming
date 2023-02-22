#include "main.h"

/**
 * _isalpha - Check main.h
 *
 * Return: 1 if input is a letter, lowercase
 * or upper otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
