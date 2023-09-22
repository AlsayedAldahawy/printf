#include "main.h"

/**
 * caseStr - prints a string to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed string.
 *
*/
int caseStr(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **weight)
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
 * @w: weight flag value.
 * Return: length of printed int.
 *
*/
int caseInt(va_list args, char flag[], int **w)
{
	int i, nOfChar = 0, digit, weight = **w, k = 0, j;
	int n = va_arg(args, int), start_digit = 0;
	char buff[BUFSIZ];
	long int num = n;
	if (num < 0)
	{
		buff[k++] = '-';
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
	while (weight > i++)
		nOfChar += _putchar(' ');
	for (i = 0; i < j; i++)
		nOfChar += _putchar(buff[i]);
	weight = 0;
	return (nOfChar);
}

/**
 * caseChar - handles character specifiers.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: 1.
 *
*/
int caseChar(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **weight)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

/**
 * caseBin - prints a binary number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed binary number.
 *
*/

int caseBin(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **weight)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intobin(x));
}

/**
 * caseUnsigned - prints an unsigned number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @w: weight flag value.
 * Return: length of printed unsigned int.
 *
*/
int caseUnsigned(va_list args, __attribute__ ((unused)) char flag[], int **w)
{
	unsigned int num = va_arg(args, unsigned int);
	int i, nOfChar = 0, j, k = 0;
	int weight = **w, digit, start_digit = 0;
	char buff[BUFSIZ];

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
	while (weight > i++)
		nOfChar += _putchar(' ');
	for (i = 0; i < j; i++)
		nOfChar += _putchar(buff[i]);
	weight = 0;
	return (nOfChar);
}
