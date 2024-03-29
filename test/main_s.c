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

    len = _printf("%+%d.\n", 5);
    len2 = printf("%+%d.\n", 5);

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("%++d.\n", 5);
    len2 = printf("%++d.\n", 5);

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("%++[].\n", 5);
    len2 = printf("%++[].\n", 5);

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);


    len = _printf("lo:%lo[].\n", 15);
    len2 = printf("lo:%lo[].\n", 15);

    _printf("m:%d\no:%d\n", len, len2);
    printf("m:%d\no:%d\n", len, len2);

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
  _printf("Let's try to printf a simple sentence.\n\n\n");

 _printf("%+d", 1024);
 printf("\n");
 printf("%+d", 1024);
 printf("\n\n");

_printf("%+d", -1024);
printf("\n");
printf("%+d", -1024);
printf("\n\n");
_printf("%+d", 0);
printf("\n");
printf("%+d", 0);
printf("\n\n");

 _printf("%+d", INT_MAX);
 printf("\n");
 _printf("%+d", INT_MAX);
 printf("\n\n");

_printf("%+d", INT_MIN);
printf("\n");
printf("%+d", INT_MIN);
printf("\n\n");

/*
printf("%+d", INT_MAX + 1024);
printf("\n");
_printf("%+d", INT_MAX + 1024);
printf("\n\n");

printf("%+d", INT_MIN - 1024);
printf("\n");
_printf("%+d", INT_MIN - 1024);
printf("\n\n");*/

len = printf("There is %+d bytes in %+d KB\n", 1024, 1);
printf("\n");
 len2 = _printf("There is %+d bytes in %+d KB\n", 1024, 1);
 printf("\n");

printf("len1:%d \n", len);
printf("len2:%d \n", len2);
printf("\n");
printf("\n");

_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
printf("\n");
printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
printf("\n");
printf("\n");

_printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("%+i", 1024);
printf("\n");
printf("%+i", 1024);
printf("\n");
printf("\n");

_printf("%+i", -1024);
printf("\n");

printf("%+i", -1024);
printf("\n");
printf("\n");

_printf("%+i", 0);
printf("\n");

printf("%+i", 0);
printf("\n");
printf("\n");



_printf("%+i", INT_MAX);
printf("\n");

_printf("%+i", INT_MAX);
printf("\n");
printf("\n");


_printf("%+i", INT_MIN);
printf("\n");

_printf("%+i", INT_MIN);
printf("\n");
printf("\n");





_printf("There is %+i bytes in %+i KB\n", 1024, 1);
printf("\n");

printf("There is %+i bytes in %+i KB\n", 1024, 1);
printf("\n");
printf("\n");

_printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
printf("\n");

printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
printf("\n");
printf("\n");

_printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");

printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("% d", 1024);
printf("\n");

printf("% d", 1024);
printf("\n");
printf("\n");

_printf("% d", -1024);
printf("\n");

printf("% d", -1024);
printf("\n");
printf("\n");

_printf("% d", 0);
printf("\n");

printf("% d", 0);
printf("\n");
printf("\n");

_printf("% d", INT_MAX);
printf("\n");

printf("% d", INT_MAX);
printf("\n");
printf("\n");

_printf("% d", INT_MIN);
printf("\n");
printf("% d", INT_MIN);
printf("\n");
printf("\n");





_printf("There is % d bytes in % d KB\n", 1024, 1);
printf("\n");
printf("There is % d bytes in % d KB\n", 1024, 1);
printf("\n");
printf("\n");

_printf("% d - % d = % d\n", 1024, 2048, -1024);
printf("\n");
printf("% d - % d = % d\n", 1024, 2048, -1024);
printf("\n");
printf("\n");


_printf("% d + % d = % d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("% d + % d = % d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("% i", 1024);
printf("\n");
printf("% i", 1024);
printf("\n");
printf("\n");

_printf("% i", -1024);
printf("\n");
printf("% i", -1024);
printf("\n");
printf("\n");

_printf("% i", 0);
printf("\n");
printf("% i", 0);
printf("\n");
printf("\n");

_printf("% i", INT_MAX);
printf("\n");
printf("% i", INT_MAX);
printf("\n");
printf("\n");


_printf("% i", INT_MIN);
printf("\n");
printf("% i", INT_MIN);
printf("\n");
printf("\n");

_printf("There is % i bytes in % i KB\n", 1024, 1);
printf("\n");
printf("There is % i bytes in % i KB\n", 1024, 1);
printf("\n");
printf("\n");

 _printf("% i - % i = % i\n", 1024, 2048, -1024);
printf("\n");
printf("% i - % i = % i\n", 1024, 2048, -1024);
printf("\n");
printf("\n");

_printf("% i + % i = % i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("% i + % i = % i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
printf("\n");
printf("\n");

_printf("%#o", 1024);
printf("\n");
printf("%#o", 1024);
printf("\n");
printf("\n");

_printf("%#o", 0);
printf("\n");
printf("%#o", 0);
printf("\n");
printf("\n");

_printf("%#o", UINT_MAX);
printf("\n");
printf("%#o", UINT_MAX);
printf("\n");
printf("\n");

_printf("%#x", 1024);printf("\n");
 _printf("%#x", 0);printf("\n");
_printf("%#x", UINT_MAX);printf("\n");
_printf("%#X", 1024);printf("\n");
_printf("%#X", 0);printf("\n");
_printf("%#X", UINT_MAX);printf("\n");
_printf("% "); printf("\n");
_printf("% % % % ");
printf("\n");printf("\n");
printf("%#x", 1024);printf("\n");
printf("%#x", 0);printf("\n");
printf("%#x", UINT_MAX);printf("\n");
printf("%#X", 1024);printf("\n");
printf("%#X", 0);printf("\n");
printf("%#X", UINT_MAX);printf("\n");
printf("% "); printf("\n");
printf("% % % % ");printf("\n");
printf("\n");
len = printf("%#o", 0);
printf("\n");
len2 = _printf("%#o", 0);
printf("\n");

printf("%d\n%d\n", len, len2);

printf("%-6d.\n", 1024);
_printf("%-6d.\n", 1024);


_printf("err: %o", 0);
printf("\n");
printf("%o", 0);
printf("\n");
printf("\n");

_printf("%x", 0);
printf("\n");
printf("%x", 0);
printf("\n");
printf("\n");

_printf("%X", 0);
printf("\n");
printf("%X", 0);
printf("\n");
printf("\n");

_printf("%u", 0);
printf("\n");
printf("%u", 0);
printf("\n");
printf("\n");

_printf("%ld", 1024L);printf("\n");
_printf("%ld", -1024L);printf("\n");
printf("\n");
printf("%ld", 1024L);printf("\n");
printf("%ld", -1024L);printf("\n");;printf("\n");
_printf("%hd", 1024L);printf("\n");
_printf("%hd", -1024L);printf("\n");
printf("\n");
printf("%hd", 1024L);printf("\n");
printf("%hd", -1024L);printf("\n");
/*
///////////////////////////////////////////////
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
    printf("m:%d\no:%d\n", len, len2);*/

    return (0);
}
