#include "main.h"

/**
 * caseStr - prints a string to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed string.
 *
*/
int caseStr(va_list args, __attribute__ ((unused)) char flag[],
	int **width, int **per, __attribute__ ((unused)) int **neg)
{
	char *s = va_arg(args, char *);
	int k = 0, nOfChar = 0, i = 0;
	char *str = s;
	char buff[BUFSIZ];

	if (!str)
	{
		str = "(null)";
	}
	if (**per == 1)
	{
		**per = 0;
		**width = 0;
	}
	else if (**per == 2)
	{
		**per = 0;
	}

	if (**per || **neg)
	{
		if (**width == 0)
			return (0);
	}
	while (str[k])
	{
		buff[k] = str[k];
		k++;
	}
	buff[k] = 0;
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k, 1);
	return (k + nOfChar);
}

/**
 * caseInt - prints a number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed int.
 *
*/
int caseInt(va_list args, char flag[], int **width, int **per, int **neg)
{
	int i, nOfChar = 0, digit, k = 0;
	int n = va_arg(args, int), start_digit = 0, per_n = 0;
	char buff[BUFSIZ];
	long int num = n;

	if (**per || **neg)
	{
		if (n == 0 && **width == 0)
			return (0);
	}
	if (num < 0)
	{
		(**per || **neg) ? (nOfChar += _putchar('-')) : (buff[k++] = '-');
		num *= -1;
		(**per == 1) ? (per_n = 1) : (per_n = 0);
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
	buff[k] = 0;
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k - per_n, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k, 1);
	return (k + nOfChar);
}

/**
 * caseChar - handles character specifiers.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: 1.
 *
*/
int caseChar(va_list args, __attribute__ ((unused)) char flag[],
	int **width, int **per, __attribute__ ((unused)) int **neg)
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
 * @neg: '-' flag.
 * Return: length of printed binary number.
 *
*/

int caseBin(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **width, __attribute__ ((unused)) int **per,
	__attribute__ ((unused)) int **neg)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intobin(x));
}

/**
 * caseUnsigned - prints an unsigned number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed unsigned int.
 *
*/
int caseUnsigned(va_list args, __attribute__ ((unused)) char flag[],
	int **width, int **per, __attribute__ ((unused)) int **neg)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, nOfChar = 0, k = 0;
	int digit, start_digit = 0;
	char buff[BUFSIZ];

	if (**per || **neg)
	{
		if (num == 0 && **width == 0)
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
	buff[k] = 0;
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	nOfChar += per_neg_handler(**per, **neg, **width, nOfChar + k, 1);
	return (k + nOfChar);
}
