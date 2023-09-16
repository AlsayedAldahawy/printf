#include <stdio.h>

int _putbinary(unsigned int n)
{
    int i;
    char *s;
    for (i = 0;; i++)
    {
        /* code */
    }
    
    return (0);
}

int _putbinary(unsigned int n)
{
    if (n <= 1)
    {
        putchar(n + '0');
    }
    else if (!(n % 2))
    {
        _putbinary(n / 2);
        putchar('0');
    }
    else if (n % 2)
    {
        _putbinary(n / 2);
        putchar('1');
    }
    return (0);
}
