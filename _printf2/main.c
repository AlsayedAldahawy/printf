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

    int x = 0;
    len2 = printf("%]\n");
    len = _printf("%]\n");
    while(x < 1)
    {
        _printf("bin:[%u, %i]\n", 89596, len2);
        printf("bin:[%u, %i]\n", 89596, len);
        _printf("oct:[%o, %o]\n", 89596, len2);
        printf("oct:[%o, %o]\n", 89596, len);
        _printf("hex:[%x, %x]\n", 89596, len2);
        printf("hex:[%x, %x]\n", 89596, len);
        _printf("HEX:[%X, %X]\n", 89596, len2);
        printf("HEX:[%X, %X]\n", 89596, len);
        _printf("HEX:[%S, %X]\n", "hama\nda\t", len2);
        printf("HEX:[%S, %X]\n", "hama\nda\t", len);
        
        x++;
    }
    return (0);
}
