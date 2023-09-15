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
int cases_int(unsigned int *i,const char *format, int num);
int cases_str(unsigned int *i,const char *format, char *s);
int cases_char(unsigned int *i,const char *format, char c);
int case_per(unsigned int *i,const char *format);

int n = 0, per = 0;
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list args;
	char c;

	if (!format || !format[0])
		return (0);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case '%':
				case_per(&i, format);
				continue;

			case 'c':
				c = va_arg(args, int);
				cases_char(&i, format, c);
				continue;

			case 's':
				cases_str(&i, format, va_arg(args, char *));
				continue;

			case 'i':
			case 'd':
				cases_int(&i, format, va_arg(args, int));
				continue;

			default:
				per = 0;
				n += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (n);
}

int case_per(unsigned int *i,const char *format)
{
	per++;
	if (per % 2)
	{
		(*i)++;
		return (0);
	}
	if (!(per % 2))
	{
		n += _putchar(format[*i]);
		(*i)++;
		per = 0;
	}
	return (1);
}

int cases_int(unsigned int *i,const char *format, int num)
{
	if (per % 2)
	{
		per = 0;
		(*i)++;
		n += print_number(num);
		return (0);
	}
	else
		n += _putchar(format[*i]);
	(*i)++;
	per = 0;
	return (1);
}

int cases_str(unsigned int *i,const char *format, char *str)
{
	if (per % 2)
	{
		(*i)++;
		n += _puts(str);
		return (0);
	}
	n += _putchar(format[*i]);
	(*i)++;
	per = 0;
	return (1);
}

int cases_char(unsigned int *i,const char *format, char c)
{
	if (per % 2)
	{
		per = 0;
		(*i)++;
		n += _putchar(c);
		return (0);
	}
	n += _putchar(format[*i]);
	(*i)++;
	per = 0;
	return (1);
}
