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

    unsigned int x = 145;
    len2 = printf("%[] \n");
    len = _printf("%[] \n");
    /*_printf("%d\n", 1024);
    _printf("%d\n", -1024);
    _printf("%d\n", 0);*/

    printf("--------------------------------------------\n");
    len = printf("o: %++++++d", x);
     printf("\n");
    len2 = _printf("m: %++++++d", x);
    printf("\n");
            printf("ori: %d\n", len); 
        _printf("mine: %d\n", len2); 
    printf("--------------------------------------------\n");
    len = printf("o: %++++++");
     printf("\n");

    len2 = _printf("m: %++++++");
    printf("\n");
         printf("orig: %   ++#+   +d\n", 17); 
        _printf("mine: %   ++#+   +d\n", 17); 
    printf("--------------------------------------------\n");
    len = printf("o: %++++++[]");
     printf("\n");

    len2 = _printf("m: %++++++[]");
    printf("\n");


    x = 1;
    while(x < 2)
    {
        printf("ori Hex: %#x\n", 18); 
        _printf("mine Hex: %#x\n", 18); 
       printf("ori oct: %#o\n", 18); 
        _printf("mine oct: %#o\n", 18); 
        printf("%#u, % u\n", len2, len);
        _printf("%#u, % u\n", len2, len);
        x++;
    }
    _printf("m: %b", 99);
    return (0);
}
