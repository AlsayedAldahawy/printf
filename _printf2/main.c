#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0

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
    char c0 = '\n';
    char *s = "";

    len2 = printf("sLet's try top%c printf%c a s%sim%cpl%se se%ddnten%%%%%i%ice.\n%", c, c2, c3, c0,s, n1,5,-5);
    len = _printf("sLet's try top%c printf%c a s%sim%cpl%se se%ddnten%%%%%i%ice.\n%", c, c2, c3, c0,s, n1,5,-5);
    _printf("Length:[%d, %i]\n", len, len2);
    printf("Length:[%d, %i]\n", len, len2);

    return (0);
}
