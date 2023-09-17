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
    long int len = 0xffffffffff;
    long int len2 = 0xffffffffff;/* n1 = -700;
    char c = 'x', c2 = 'y', *c3 = "asbd";
    char c0 = '\n';
    char *s = "";*/

    int x = 1;
    /*len2 = printf("%S\n", "\t\n");
    len = _printf("%S\n", "\t\n");*/
    while(x < 2)
    {
         printf("HEX:[%s, %p]\n", "\t", len);
        _printf("HEX:[%s, %p]\n", "\t", len2);
       
        
        x++;
    }
    return (0);
}
