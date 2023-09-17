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
    long int len = 0;
    long int len2 = 0;
    
    /* n1 = -700;
    char c = 'x', c2 = 'y', *c3 = "asbd";
    char c0 = '\n';
    char *s = "";*/

    int x = 1;
    len2 = printf("%[] \n");
    len = _printf("%[] \n");
    /*_printf("%d\n", 1024);
    _printf("%d\n", -1024);
    _printf("%d\n", 0);*/

    printf("%--d\n", 1024);
    printf("%--d\n", -1024);
    printf("%  -  d\n", 0);
    while(x < 2)
    {
        len = printf("%s", "Guvf fragrapr vf ergevrirq sebz in_netf!\n"); 
        len2 = _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n"); 
       
        printf("%i, %d\n", len2, len);
        x++;
    }
    return (0);
}
