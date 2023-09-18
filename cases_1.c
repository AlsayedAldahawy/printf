#include "main.h"

/**
 * caseStr - prints a string to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed string.
 *
*/
int caseStr(va_list args, __attribute__ ((unused)) char flag[])
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
 * @flag: flags
 * Return: length of printed int.
 *
*/
int caseInt(va_list args, char flag[])
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
	else if (flag_finder('+', flag))
	{
		_putchar('+');
		nOfChar++;
	}
	else if (flag_finder(' ', flag))
	{
		_putchar(' ');
		nOfChar++;
	}

	flag_eraser(flag);

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
 * @flag: flags
 * Return: 1.
 *
*/
int caseChar(va_list args, __attribute__ ((unused)) char flag[])
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * caseBin - prints a binary number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed binary number.
 *
*/

int caseBin(va_list args, __attribute__ ((unused)) char flag[])
{
	unsigned int x = va_arg(args, unsigned int);

	return (intobin(x));
}

/**
 * caseUnsigned - prints an unsigned number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed unsigned int.
 *
*/
int caseUnsigned(va_list args, __attribute__ ((unused)) char flag[])
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int i, nOfChar = 0;
	int digit;
	int start_digit = 0;

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
