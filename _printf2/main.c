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
    len2 = printf("%b", 17);
    len = _printf("%b", 17);
    while(x < 1)
    {
        _printf("Length%c:[%d, %i]\n",x, len, len2);
        printf("Length%c:[%d, %i]\n",x, len, len2);
        x++;
    }
    return (0);
}
