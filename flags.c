#include "main.h"

/**
 * flagplus - handles the '+' & ' ' flags of integer .
 * @format: format string.
 *
 * Return: 0 if the next character in the format string
 * is {'i', 'd', 'c', ' ', '+', '#', '\0'}.
 *
 * otherwise return 2, which is the number of printed
 * characters to stdout by the function.
 *
 */

int flagplus(char const *format)
{
	char fnext[8] = {'i', 'd', 'u', 'c', ' ', '+', '#', '\0'};
	int i, nochar = 0;

	for (i = 0; i < 8; i++)
	{
		if (*(format + 1) == fnext[i])
		{
			return (0);
		}
		if (*(format + 1) == '%')
		{
			return (1);
		}
	}
	nochar += _putchar('%');
	nochar += _putchar(*(format));
	return (nochar);
}

/**
 * flaghash - handles the '#' flag of the Hexadecimal .
 * @format: format string.
 *
 * Return: 0 if the next character in the format string
 * is {'h', 'H', 'c', ' ', '+', '#', '\0'}.
 *
 * otherwise return 2, which is the number of
 * printed characters to stdout by the function.
 *
 */
int flaghash(char const *format)
{
	char fnext[9] = {'X', 'o', 'x', 'u', 'c', ' ', '+', '#', '\0'};
	int i, nochar = 0;

	for (i = 0; i < 7; i++)
	{
		if (*(format + 1) == fnext[i])
		{
			return (0);
		}
		if (*(format + 1) == '%')
		{
			return (1);
		}
	}
	nochar += _putchar('%');
	nochar += _putchar(*(format));
	return (nochar);
}

/**
 * printlong - prints long int.
 * @args: va_list
 * Return: no of characters printed.
*/
int printlong(va_list args)
{
	long int i;
	unsigned int nOfChar = 0;
	int digit;
	int start_digit = 0;
	long int num = va_arg(args, long int);

	if (num < 0)
	{
		nOfChar += _putchar('-');
		num *= -1;
	}

	for (i = 1000000000000000000; i >= 1 ; i = i / 10)
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
 * printshort - prints long int.
 * @args: va_list
 * Return: no of characters printed.
*/
int printshort(va_list args)
{
	short int i;
	unsigned int nOfChar = 0;
	int digit;
	int start_digit = 0;
	short int num = va_arg(args, int);

	if (num < 0)
	{
		nOfChar += _putchar('-');
		num *= -1;
	}

	for (i = 10000; i >= 1 ; i = i / 10)
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
