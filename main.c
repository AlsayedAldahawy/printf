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


    len = _printf("sLet's try top%c printf%c a s%simple se%ddnten%%%%%i%ice.\n", c, c2, c3, n1,5,-5);
    len2 = printf("sLet's try top%c printf%c a s%simple se%ddnten%%%%%i%ice.\n", c, c2, c3, n1,5,-5);
    len2 = printf("sLet's t%ry toc printf%%%%\n");
    len = _printf("sLet's t%ry toc printf%%%%\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
 
    printf("%d\n%d\n", len2, len);


    return (0);
}
