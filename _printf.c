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
	unsigned int i = 0, n = 0;
	va_list args;

	if (!format || !format[0])
		return (0);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case '%':
				if (format[i + 1] == 'c')
					n += _putchar(va_arg(args, int));
				else if (format[i + 1] == 's')
					n += _puts(va_arg(args, char *));
				break;
			case 'c':
				if ((i == 0) || (format[i - 1] == '%'))
				{
					i++;
					continue;
				}
				n += _putchar(format[i]);
				break;
			case 's':
				if ((i == 0) || (format[i - 1] == '%'))
				{
					i++;
					continue;
				}
				n += _putchar(format[i]);
				break;
			default:
				n += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (n);
}

