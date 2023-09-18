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

    /*len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
  ///////////////////////////////////////////////////////////////
  Files: main_0.c

Correct output - case: _printf("%+d", 1024);

Score: 1 out of 1 points

Files: main_0.c

Correct output - case: _printf("%+d", -1024);

Score: 2 out of 2 points

Files: main_1.c

Correct output - case: _printf("%+d", 0);

Score: 2 out of 2 points

Files: main_2.c

Correct output - case: _printf("%+d", INT_MAX);

Score: 2 out of 2 points

Files: main_3.c

Correct output - case: _printf("%+d", INT_MIN);

Score: 2 out of 2 points

Files: main_4.c

Correct output - case: _printf("%+d", l); where l is a long int equals to INT_MAX + 1024

Score: 2 out of 2 points

Files: main_5.c

Correct output - case: _printf("%+d", l); where l is a long int equals to INT_MIN - 1024

Score: 2 out of 2 points

Files: main_6.c

Correct output - case: _printf("There is %+d bytes in %+d KB\n", 1024, 1);

Score: 2 out of 2 points

Files: main_7.c

Correct output - case: _printf("%+d - %+d = %+d\n", 1024, 2048, -1024);

Score: 2 out of 2 points

Files: main_8.c

Correct output - case: _printf("%+d + %+d = %+d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 2 out of 2 points

Files: main_9.c

Correct output - case: _printf("%+i", 1024);

Score: 2 out of 2 points

Files: main_10.c

Correct output - case: _printf("%+i", -1024);

Score: 2 out of 2 points

Files: main_11.c

Correct output - case: _printf("%+i", 0);

Score: 2 out of 2 points

Files: main_12.c

Correct output - case: _printf("%+i", INT_MAX);

Score: 2 out of 2 points

Files: main_13.c

Correct output - case: _printf("%+i", INT_MIN);

Score: 2 out of 2 points

Files: main_14.c

Correct output - case: _printf("%+i", l); where l is a long int equals to INT_MAX + 1024

Score: 2 out of 2 points

Files: main_15.c

Correct output - case: _printf("%+i", l); where l is a long int equals to INT_MIN - 1024

Score: 2 out of 2 points

Files: main_16.c

Correct output - case: _printf("There is %+i bytes in %+i KB\n", 1024, 1);

Score: 2 out of 2 points

Files: main_17.c

Correct output - case: _printf("%+i - %+i = %+i\n", 1024, 2048, -1024);

Score: 2 out of 2 points

Files: main_18.c

Correct output - case: _printf("%+i + %+i = %+i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 2 out of 2 points

Files: main_19.c

Correct output - case: _printf("% d", 1024);

Score: 2 out of 2 points

Files: main_20.c

Correct output - case: _printf("% d", -1024);

Score: 2 out of 2 points

Files: main_21.c

Correct output - case: _printf("% d", 0);

Score: 2 out of 2 points

Files: main_22.c

Correct output - case: _printf("% d", INT_MAX);

Score: 1 out of 1 points

Files: main_23.c

Correct output - case: _printf("% d", INT_MIN);

Score: 1 out of 1 points

Files: main_24.c

Correct output - case: _printf("% d", l); where l is a long int equals to INT_MAX + 1024

Score: 1 out of 1 points

Files: main_25.c

Correct output - case: _printf("% d", l); where l is a long int equals to INT_MIN - 1024

Score: 1 out of 1 points

Files: main_26.c

Correct output - case: _printf("There is % d bytes in % d KB\n", 1024, 1);

Score: 1 out of 1 points

Files: main_27.c

Correct output - case: _printf("% d - % d = % d\n", 1024, 2048, -1024);

Score: 1 out of 1 points

Files: main_28.c

Correct output - case: _printf("% d + % d = % d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 1 out of 1 points

Files: main_29.c

Correct output - case: _printf("% i", 1024);

Score: 1 out of 1 points

Files: main_30.c

Correct output - case: _printf("% i", -1024);

Score: 1 out of 1 points

Files: main_31.c

Correct output - case: _printf("% i", 0);

Score: 1 out of 1 points

Files: main_32.c

Correct output - case: _printf("% i", INT_MAX);

Score: 1 out of 1 points

Files: main_33.c

Correct output - case: _printf("% i", INT_MIN);

Score: 1 out of 1 points

Files: main_34.c

Correct output - case: _printf("% i", l); where l is a long int equals to INT_MAX + 1024

Score: 1 out of 1 points

Files: main_35.c

Correct output - case: _printf("% i", l); where l is a long int equals to INT_MIN - 1024

Score: 1 out of 1 points

Files: main_36.c

Correct output - case: _printf("There is % i bytes in % i KB\n", 1024, 1);

Score: 1 out of 1 points

Files: main_37.c

Correct output - case: _printf("% i - % i = % i\n", 1024, 2048, -1024);

Score: 1 out of 1 points

Files: main_38.c

Correct output - case: _printf("% i + % i = % i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 1 out of 1 points

Files: main_39.c

Correct output - case: _printf("% +i + %+ i = % +d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 1 out of 1 points

Files: main_40.c

Correct output - case: _printf("% +d + %+ d = % +i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

Score: 1 out of 1 points

Files: main_41.c

Correct output - case: _printf("%#o", 1024);

Score: 1 out of 1 points

Files: main_42.c

Correct output - case: _printf("%#o", 0);

Score: 1 out of 1 points

Files: main_43.c

Correct output - case: _printf("%#o", UINT_MAX);

Score: 1 out of 1 points

Files: main_44.c

Correct output - case: _printf("%#x", 1024);

Score: 1 out of 1 points

Files: main_45.c

Correct output - case: _printf("%#x", 0);

Score: 1 out of 1 points

Files: main_46.c

Correct output - case: _printf("%#x", UINT_MAX);

Score: 1 out of 1 points

Files: main_47.c

Correct output - case: _printf("%#X", 1024);

Score: 1 out of 1 points

Files: main_48.c

Correct output - case: _printf("%#X", 0);

Score: 2 out of 2 points

Files: main_49.c

Correct output - case: _printf("%#X", UINT_MAX);

Score: 2 out of 2 points

Files: main_50.c

Correct output - case: _printf("% "); _printf("% % % % ");

Score: 2 out of 2 points

Files: main_51.c

Handled malloc return

Return SUCCESS
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
