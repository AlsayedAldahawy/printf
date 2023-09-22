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
	int buff_index = 0, i;
	char buff[BUFSIZ];

	if (c == 'x')
	{
		len += intohex(x, &buff_index, buff);
		i = len;
	}
	else if (c == 'X')
	{
		len += intoHEX(x, &buff_index, buff);
		i = len;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(buff[i]);
	}
	return (i);
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
	int buff_index = 0, i;
	char buff[BUFSIZ];

	if (c == 'x')
	{
		len += intohex(x, &buff_index, buff);
		i = len;
	}
	else if (c == 'X')
	{
		len += intoHEX(x, &buff_index, buff);
		i = len;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(buff[i]);
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
	int buff_index = 0, len = 0, i;
	char buff[BUFSIZ];

	len += intoct(x, &buff_index, buff);
	i = len;

	for (i = 0; i < len; i++)
	{
		_putchar(buff[i]);
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
	int buff_index = 0, len = 0, i;
	char buff[BUFSIZ];

	len += intoct(x, &buff_index, buff);
	i = len;

	for (i = 0; i < len; i++)
	{
		_putchar(buff[i]);
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
