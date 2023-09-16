#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 *
 * @format: string format to be printed.
 *
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 *
 *
 *
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, per = 0, n = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case '%':
				per++;
				n += case_per(format[i], format[i + 1], &per);
				break;
			case 'c':
				n += case_char(format[i], &per, args);
				break;
			case 's':
				n += case_str(format[i], &per, args);
				break;
			case 'd':
			case 'i':
				n += case_int(format[i], &per, args);
				break;
			default:
				per = 0;
				n += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (n);
}
