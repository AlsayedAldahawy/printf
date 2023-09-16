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
int cases_int(unsigned int i,const char *format, int num, unsigned int per);
int cases_str(unsigned int i,const char *format, char *s, unsigned int per);
int cases_char(unsigned int i,const char *format, char c, unsigned int per);
int case_per(unsigned int i,const char *format, unsigned int per);

int _printf(const char *format, ...)
{
	unsigned int i = 0, per = 0;
	va_list args;
	char c = '?';
	int num, n = 0;

	if (!format)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		switch (format[i])
		{
			case '%':
				per++;
				n += case_per(i, format, per);
				break;

			case 'c':
				c = (va_arg(args, int));
				write(1, &c, 1);
				_putchar(c);
				n += cases_char(i, format, c, per);
				per = 0;
				break;

			case 's':
				n += cases_str(i, format, va_arg(args, char *), per);
				per = 0;
				break;

			case 'i':
			case 'd':
				num = va_arg(args, int);
				n += cases_int(i, format, num, per);
				per = 0;
				break;

			default:
				n += _putchar(format[i]);
				per = 0;
		}
		i++;
	}
	va_end(args);
	return (n);
}

int case_per(unsigned int i,const char *format, unsigned int per)
{
	char *str = "idsc";
	int j = 0, next = 0, n = 0;
	unsigned int k = i;

	while (str[j])
	{
		if (format[k + 1] == str[j])
			next = 1;
		j++;
	}
	
	if (per % 2 && next == 0)
	{
		n += _putchar(format[i]);
	}
	return (n);	
}

int cases_int(unsigned int i,const char *format, int num, unsigned int per)
{
	int n = 0;

	if (per % 2)
		n += print_number(num);
	else
		n += _putchar(format[i]);
	return (n);
}

int cases_str(unsigned int i,const char *format, char *str, unsigned int per)
{
	int n = 0;

	if (per % 2)
		n += _puts(str);
	else
		n += _putchar(format[i]);
	return (n);
}

int cases_char(unsigned int i,const char *format, char c, unsigned int per)
{
	int n = 0;

	if (per % 2)
	{
		n += printf("%c",c);
		_putchar('?');
	}
	else
		n += _putchar(format[i]);
	return (n);
}
