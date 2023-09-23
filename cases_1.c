#include "main.h"

/**
 * caseStr - prints a string to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * Return: length of printed string.
 *
*/
int caseStr(va_list args, __attribute__ ((unused)) char flag[],
	int **width, int **per)
{
	char *s = va_arg(args, char *);
	int i = 0, n = 0, j;
	char *str = s, per_c = ' ';
	char buff[BUFSIZ];

	if (!str)
	{
		str = "(null)";
	}
	if (**per == 1)
	{
		if (n == 0 && **width == 0)
			return (0);
	}
	while (str[i])
	{
		buff[i] = str[i];
		i++;
	}
	buff[i] = 0;
	(**per) ? (j = **width--) : (j = i);
	while (**width > i && !**per)
	{
		n += _putchar(per_c);
		i++;
	}
	for (i = 0; buff[i] && i < j; i++)
	{
		n += _putchar(buff[i]);
	}
	return (n);
}

/**
 * caseInt - prints a number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @w: width flag value.
 * @per: percision flag.
 * Return: length of printed int.
 *
*/
int caseInt(va_list args, char flag[], int **w, int **per)
{
	int i, nOfChar = 0, digit, width = **w, k = 0, j;
	int n = va_arg(args, int), start_digit = 0;
	char buff[BUFSIZ], per_c = ' ';
	long int num = n;

	if (**per == 1)
	{
		per_c = '0';
		if (n == 0 && **w == 0)
			return (0);
	}
	if (num < 0)
	{
		(**per) ? (nOfChar += _putchar('-')) : (buff[k++] = '-');
		num *= -1;
	}
	else if (flag_finder('+', flag))
		buff[k++] = '+';
	else if (flag_finder(' ', flag))
		buff[k++] = ' ';
	flag_eraser(flag);
	for (i = 1000000000; i >= 1 ; i = i / 10)
	{
		if ((num / i == 0) && (start_digit == 0) && (i != 1))
			continue;
		digit = (num / i) % 10;
		buff[k++] = (digit + '0');
		start_digit = 1;
	}
	i = k;
	j = i;
	while (width > i++)
		nOfChar += _putchar(per_c);
	for (i = 0; i < j; i++)
		nOfChar += _putchar(buff[i]);
	width = 0;
	return (nOfChar);
}

/**
 * caseChar - handles character specifiers.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * Return: 1.
 *
*/
int caseChar(va_list args, __attribute__ ((unused)) char flag[],
	int **width, int **per)
{
	char c = va_arg(args, int), per_c = ' ';
	int n = 0;

	if (**per == 1)
	{
		per_c = '0';
		if (c == 0 && **width == 0)
			return (0);
	}
	while (**width > 1)
	{
		n += _putchar(per_c);
		(**width)--;
	}
	**width = 0;
	return (_putchar(c) + n);
}

/**
 * caseBin - prints a binary number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * Return: length of printed binary number.
 *
*/

int caseBin(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **width, __attribute__ ((unused)) int **per)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intobin(x));
}

/**
 * caseUnsigned - prints an unsigned number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @w: width flag value.
 * @per: percision flag.
 * Return: length of printed unsigned int.
 *
*/
int caseUnsigned(va_list args, __attribute__ ((unused)) char flag[],
	int **w, int **per)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, nOfChar = 0, j, k = 0;
	int width = **w, digit, start_digit = 0;
	char buff[BUFSIZ], per_c = ' ';

	if (**per == 1)
	{
		per_c = '0';
		if (num == 0 && **w == 0)
			return (0);
	}
	for (i = 1000000000; i >= 1 ; i = i / 10)
	{
		if ((num / i == 0) && (start_digit == 0) && (i != 1))
			continue;
		digit = (num / i) % 10;
		buff[k++] = (digit + '0');
		start_digit = 1;
	}
	i = k;
	j = i;
	while (width > i++)
		nOfChar += _putchar(per_c);
	for (i = 0; i < j; i++)
		nOfChar += _putchar(buff[i]);
	width = 0;
	return (nOfChar);
}
