#include "main.h"
#define BUFFER_SIZE 1024

/**
 * _putchar - prints a character to stdout.
 * @c: charachter to be printed.
 * Return: 1.
 *
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * caseStr - prints a string to stdout.
 * @s: string to be printed.
 * Return: length of printed string.
 *
*/
int caseStr(char *s)
{
	int i = 0;
	char *str = s;

	if (!str)
	{
		str = "(null)";
	}

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

/**
 * caseInt - prints a number to stdout.
 * @num: number to be printed.
 * Return: length of printed int.
 *
*/
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

/**
 * caseBin - prints a binary number to stdout.
 * @x: number to be converted and printed.
 * Return: length of printed binary number.
 *
*/

int caseBin(unsigned int x)
{
	int len = 0;

	if (x == 0)
	{
		len += _putchar('0');
	}
	else if (x == 1)
	{
		len += _putchar('1');
	}
	else
	{
		if (x % 2)
		{
			len += caseBin(x / 2);
			len += _putchar('1');
		}
		else
		{
			len += caseBin(x / 2);
			len += _putchar('0');
		}
	}
	return (len);
}
/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int nochar = 0;

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
				nochar += _putchar(va_arg(args, int));
				break;
			case 's':
				nochar += caseStr(va_arg(args, char *));
				break;
			case 'i':
			case 'd':
				nochar += caseInt(va_arg(args, int));
				break;
			case '\0':
				return (-1);
			case '%':
				nochar += _putchar(*(format));
				break;
			case 'b':
				nochar += caseBin(va_arg(args, unsigned int));
				break;
			default:
				nochar +=  _putchar(*(--format));
			}
		}
		else
			nochar +=  _putchar(*format);
		format++;
	}
	va_end(args);
	return (nochar);
}
