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

    len2 = printf("1");
    len = _printf("1");
   _printf("Length%s:[%d, %i]\n",NULL, len, len2);
    printf("Length%s:[%d, %i]\n",NULL, len, len2);

    return (0);
}
