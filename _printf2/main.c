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
    int len2;/* n1 = -700;
    char c = 'x', c2 = 'y', *c3 = "asbd";
    char c0 = '\n';
    char *s = "";*/

    int x = 1;
    len2 = printf("%]\n");
    len = _printf("%]\n");
    while(x < 32)
    {
        _printf("HEX:[%S, %X]\n", x, len2);
        printf("HEX:[%S, %X]\n", x, len);
        
        x++;
    }
    return (0);
}
