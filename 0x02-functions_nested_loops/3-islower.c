#include "main.h"

/**
 * _islower - Shows 1 if input is lowercase
 * else it shows 0
 * Return: 1 for lowercase the rest 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
