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
	unsigned int n = 0;
	va_list args;
	char *buffer[BUFFER_SIZE];

	if (!format)
		return (-1);
	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
				format++;
				switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int), &buffer[i]);
					break;
				case 's':
					puts(va_arg(args, int), &buffer[i]);
					break;
				case 'd':
				case 'i':
					n += case_int(format[i], args);
					break;
				default:
					n += _putchar(*format);
			}
		}
	}
	va_end(args);
	return (n);
}
