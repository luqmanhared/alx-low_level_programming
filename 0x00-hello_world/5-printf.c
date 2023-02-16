#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("size of char: %lu bytes(s)\n", sizeof(char));
	printf("size of an int: %lu bytes(s)\n", sizeof(int));
	printf("size of a long int: %lu bytes(s)\n", sizeof(long int));
	printf("size of long long long int: %lu byte(s)\n", sizeof(long long long));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0)
}
