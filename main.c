#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2, n1 = -700;
    char c = 'x', c2 = 'y', *c3 = "asbd";

    len = _printf("sLet's try to%c printf%c a s%simple se%ddnten%%%%%i%ice.\n", c, c2, c3, n1,5,-5);
    len2 = printf("sLet's try to%c printf%c a s%simple se%ddnten%%%%%i%ice.\n", c, c2, c3, n1,5,-5);
    printf("%d\n%d\n", len, len2);


    return (0);
}
