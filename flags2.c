#include "main.h"

/**
 * printlongHex - prints long hex.
 * @args: va_list
 * @c: variable to chose ABCDEF or abcdef
 * Return: no of characters printed.
*/

int printlongHex(va_list args, char c)
{
	long int x = va_arg(args, int long);
	int len = 0;

	if (c == 'x')
	{
		len += intohex(x);
	}
	else if (c == 'X')
	{
		len += intoHEX(x);
	}
	return (len);
}

/**
 * printshortHex - prints long hex.
 * @args: va_list
 * @c: variable to chose ABCDEF or abcdef
 * Return: no of characters printed.
*/

int printshortHex(va_list args, char c)
{
	unsigned short int x = va_arg(args, int);
	int len = 0;

	if (c == 'x')
	{
		len += intohex(x);
	}
	else if (c == 'X')
	{
		len += intoHEX(x);
	}
	return (len);
}

/**
 * printshortoct - prints long hex.
 * @args: va_list
 * Return: no of characters printed.
*/

int printshortoct(va_list args)
{
	unsigned short int x = va_arg(args, int);
	int len = 0;

	if (x / 8 == 0)
	{
		len += _putchar((x % 8) + '0');
	}
	else
	{
		len += intoct(x / 8);
		len += _putchar((x % 8) + '0');
	}
	return (len);
}

/**
 * printlongoct - prints long hex.
 * @args: va_list
 * Return: no of characters printed.
*/

int printlongoct(va_list args)
{
	unsigned long int x = va_arg(args, long int);
	int len = 0;

	if (x / 8 == 0)
	{
		len += _putchar((x % 8) + '0');
	}
	else
	{
		len += intoct(x / 8);
		len += _putchar((x % 8) + '0');
	}
	return (len);
}

/**
 * printlongunsi - prints an unsigned number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed unsigned int.
 *
*/
int printlongunsi(va_list args)
{
	unsigned long int x = va_arg(args, unsigned long int);

	return (_long(x));
}
