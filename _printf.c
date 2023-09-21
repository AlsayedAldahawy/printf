#include "main.h"
#define BUFFER_SIZE 1024

/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	char flag[40] = "0000000000000000000000000000000000000000";
	int flg_indx = 0, nochar = 0, skip = 0, go_to;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
MAINLOOP:
		if (*format == '%')
		{
FLAGLOOP:
			format++;
			if (*format == '\0')
				return (-1);
			setvariables(&skip, &go_to);
			skip = caseselector(args, *format, &flg_indx, &nochar, flag);
			go_to = flagselector(format, &flg_indx, flag, &nochar, args);
			if (go_to == 1)
				goto FLAGLOOP;
			else if (go_to == 2 || go_to == 3)
			{
				format++;
					if (go_to == 3)
						format++;
				goto MAINLOOP;
			}
			else if (go_to == 4)
				break;
			if (go_to == 5)
			{
				nochar += _putchar(*((format++) - 1));
				goto MAINLOOP;
			}
			(*format == '%') ? (nochar += _putchar(*(format))) :
				((!skip)) ? (nochar +=  _putchar(*(--format))) : (nochar *= 1);
		}
		else
			nochar +=  _putchar(*format);
		format++;
	}
	va_end(args);
	return (nochar);
}
