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
    len2 = printf("h[\n%");
    len = _printf("h[\n%");
    while(x < 1)
    {
        _printf("Length:[%d, %i]\n", len2, len);
        printf("Length:[%d, %i]\n", len2, len);
        
        x++;
    }
    return (0);
}
