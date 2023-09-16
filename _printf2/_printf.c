#include "main.h"
#define BUFFER_SIZE 1024

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int caseStr(char *s)
{
    int i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
    return (i);
}

int caseInt(int num)
{
	unsigned int i, nOfChar = 0;
	int digit;
	int start_digit = 0;

	if (num < 0)
	{
		_putchar('-');
		nOfChar++;
		num *= -1;
	}

	for (i = 1000000000; i >= 1 ; i = i / 10)
	{

		if ((num / i == 0) && (start_digit == 0) && (i != 1))
			continue;

		digit = (num / i) % 10;
		_putchar(digit + '0');
		nOfChar++;
		start_digit = 1;
	}
	return (nOfChar);
}


int _printf(const char *format, ...)
{
    va_list args;
    unsigned int nochar = 0;
    char c;
    /*unsigned int index = 0;*/
    /*unsigned int index = 0;
    */
   if (!format)
   {
        return (-1);
   }
   
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
            case 'c':
                c = va_arg(args, int);
                nochar += _putchar(c);
                break;
            case 's':
                nochar += caseStr(va_arg(args, char *));
                break;
            case 'i':
            case 'd':
                nochar += caseInt(va_arg(args, int));
                break;
            default:
              nochar +=  _putchar(*format);
            }
        }
        else
            nochar +=  _putchar(*format);
        format++;
    }
    va_end(args);
    return (nochar);
    
}
