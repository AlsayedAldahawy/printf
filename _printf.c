#include "main.h"
#define BUFFER_SIZE 1024

/**
 * widthflag - handles width flag.
 * @f: format string
 * @w: pointer to width flag value.
 * @per: percision flag.
 * @args: arguments list.
 * Return: length of printed string.
 *
*/

int widthflag(const char *f, int *w, int *per, va_list args)
{
	int i = 0, width = 0;
	*per = 0;

	if (f[i] == '.' || f[i] == '0')
	{
		*per = 1;
	}
	for (i = *per; f[i]; i++)
	{
		if (f[i] >= '0' && f[i] <= '9')
		{
			width *= 10;
			width += f[i] - '0';
		}
		else if (f[i] == '*')
		{
			i++;
			width = va_arg(args, int);
			break;
		}
		else
			break;
	}

	*w = width;

	return (i);
}

/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	char flag[40] = "0000000000000000000000000000000000000000";
	int flg_indx = 0, nochar = 0, skip = 0, go_to, weight = 0, per;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
MAINLOOP:
		if (*format == '%')
		{
FLAGLOOP:
			if (*(++format) == '\0')
				return (-1);
			setvariables(&skip, &go_to);
			format += widthflag(format, &weight, &per, args);
			skip = caseselector(args, *format, &flg_indx, &nochar, flag, &weight, &per);
			go_to = flagselector(format, &flg_indx, flag, &nochar, args, &skip);
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
