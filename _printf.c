#include "main.h"

int case_char(char f, unsigned int *per, va_list args);
int case_str(char f, unsigned int *per, va_list args);
int case_per(char f, char fn, unsigned int *per);
int case_int(char f, unsigned int *per, va_list args);

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

	if (!format || !format[0])
		return (0);
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

/**
 * case_per - case if the character was "%".
 *
 * @f: current character.
 * @fn: next character.
 * @per: number of consequence '%'
 * Return: the number of characters printed
 *
 */

int case_per(char f, char fn, unsigned int *per)
{
	char *str = "idsc";
	int j = 0, next = 0, n = 0;

	while (str[j])
	{
		if (fn == str[j])
			next = 1;
		j++;
	}

	if (*per % 2 && next == 0)
	{
		n += _putchar(f);
	}
	return (n);
}

/**
 * case_char - case if the character was "c".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_char(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += _putchar(va_arg(args, int));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}

/**
 * case_str - case if the character was "s".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_str(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += _puts(va_arg(args, char *));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}
/**
 * case_int - case if the character was "i or d".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_int(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += print_number(va_arg(args, int));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}
