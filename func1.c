#include "main.h"

/**
 * caseStr - prints a string to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed string.
 *
*/
int caseStr(va_list args)
{
	char *s = va_arg(args, char *);
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
 * @args: list of variadic function arguments.
 * Return: length of printed int.
 *
*/
int caseInt(va_list args)
{
	unsigned int i, nOfChar = 0;
	int digit, num = va_arg(args, int);
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
 * caseChar - handles character specifiers.
 * @args: list of variadic function arguments.
 * Return: 1.
 *
*/
int caseChar(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * caseBin - prints a binary number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed binary number.
 *
*/

int caseBin(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intobin(x));
}