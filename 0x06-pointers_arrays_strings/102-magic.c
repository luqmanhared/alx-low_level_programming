#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    /*
     * Write your line of code here...
     * Remember:
     * - You are not allowed to use a
     * - You are not allowed to modify p
     * - Only one statement
     * - You are not allowed to code anything else than this line of code
     */
    *(p + 5) = 98;

    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", *(p + 5));
    return (0);
}