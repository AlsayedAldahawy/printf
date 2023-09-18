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
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

   len = _printf("empty Character:[%c]\n", ' ');
   len2 = printf("empty Character:[%c]\n", ' ');
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len =_printf("Character:[%c]\n", 'H');
    len2 =printf("Character:[%c]\n", 'H');
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);


   len = _printf("Character:[%c%c]\n", 'H', 'I');
    len2 = printf("Character:[%c%c]\n", 'H', 'I');

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);


    len =_printf("Character:[%c%c%c]\n", 'H', 'I', '!');
    len2 = printf("Character:[%c%c%c]\n", 'H', 'I', '!');
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("Character:[%c %c %c]\n", 'H', 'I', '!');
    len2 = printf("Character:[%c %c %c]\n", 'H', 'I', '!');
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("Two c with Space:[%c %c]\n", 'H', 'I');
    len2 = printf("Two c with Space:[%c %c]\n", 'H', 'I');

     _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("empty String:[%s]\n", "");
    len2 = printf("empty String:[%s]\n", "");

     _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("Space String:[%s]\n", " ");
    len2 = printf("Space String:[%s]\n", " ");
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("String:[%s%s]\n", "I am a string !", "second string !");
    len2 = printf("String:[%s%s]\n", "I am a string !", "second string !");
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

   len = _printf("String:[%s %s]\n", "I am a string !", "second string !");
    len2 = printf("String:[%s %s]\n", "I am a string !", "second string !");
    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    return (0);
}
