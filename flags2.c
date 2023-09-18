#include "main.h"

/**
 * printlongHex - prints long hex.
 * @args: va_list
 * @c: variable to chose ABCDEF or abcdef
 * Return: no of characters printed.
*/

int printlongHex(va_list args, int c)
{
	long int x = va_arg(args, int long);
	int len = 0;

	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
	}
	else
	{
		len += intohex(x / 16);
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
	}
	return (len);
}

/**
 * printshortHex - prints long hex.
 * @args: va_list
 * @c: variable to chose ABCDEF or abcdef
 * Return: no of characters printed.
*/

int printshortHex(va_list args, int c)
{
	short int x = va_arg(args, int);
	int len = 0;

	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
	}
	else
	{
		len += intohex(x / 16);
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
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
	short int x = va_arg(args, int);
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
	long int x = va_arg(args, long int);
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
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int i, nOfChar = 0;
	int digit;
	int start_digit = 0;

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
