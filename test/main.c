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
    unsigned int x = 145;
    printf("hexa: %### +   d\n", x);
    printf("s%+++", x);
    printf("s%b", 0);


    return (0);
}
