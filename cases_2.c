#include "main.h"

/**
 * caseOctal - prints a octal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed octal number.
 *
*/

int caseOctal(va_list args, char flag[], int **width, int **per,
	__attribute__ ((unused)) int **neg)
{
	unsigned long int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0;
	char buff[BUFSIZ];

	if (**per || **neg)
	{
		if (x == 0 && **width == 0)
			return (0);
	}
	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		buff[buff_index++] = 'x';
		len += 2;
	}
	flag_eraser(flag);

	intoct(x, &buff_index, buff);
	buff[buff_index] = 0;
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 1);
	return (buff_index + len);
}

/**
 * casehexa - prints a hexadecimal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed hexadecimal number.
 *
*/
int casehexa(va_list args, char flag[], int **width, int **per,
	__attribute__ ((unused)) int **neg)
{
	unsigned long int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0;
	char buff[BUFSIZ];

	if (**per || **neg)
	{
		if (x == 0 && **width == 0)
			return (0);
	}
	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		buff[buff_index++] = 'x';
	}
	flag_eraser(flag);

	intohex(x, &buff_index, buff);
	buff[buff_index] = 0;
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 1);
	return (buff_index + len);
}

/**
 * caseHEXA - prints a HEXADECIMAL number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed HEXADECIMAL number.
 *
*/
int caseHEXA(va_list args, char flag[], int **width, int **per,
	__attribute__ ((unused)) int **neg)
{
	unsigned long int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0;
	char buff[BUFSIZ];

	if (**per || **neg)
	{
		if (x == 0 && **width == 0)
			return (0);
	}
	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		buff[buff_index++] = 'X';
	}
	flag_eraser(flag);

	intoHEX(x, &buff_index, buff);
	buff[buff_index] = 0;
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 0);
	for (i = 0; buff[i]; i++)
		_putchar(buff[i]);
	len += per_neg_handler(**per, **neg, **width, len + buff_index, 1);
	return (buff_index + len);
}

/**
 * caseaddr - prints a ptr address number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed address number.
 *
*/
int caseaddr(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **width, __attribute__ ((unused)) int **per,
	__attribute__ ((unused)) int **neg)
{
	void *x = va_arg(args, void*);
	char *s = "(nil)";
	unsigned long int ptr;
	int buff_index = 0, len = 0, i = 0;
	char buff[BUFSIZ];

	if (x == NULL)
	{
		for (len = 0; s[len]; len++)
		{
			_putchar(s[len]);
		}
		return (len);
	}
	ptr = (unsigned long int) x;
	intohex(ptr, &buff_index, buff);
	buff[buff_index] = 0;

	(**per) ? (_putchar('0'), _putchar('x')) : (i = 2);
	len += per_neg_handler(**per, **neg, **width, len + buff_index + i, 0);
	(!**per) ? (_putchar('0'), _putchar('x')) : (len = len);

	for (buff_index = 0; buff[buff_index]; buff_index++)
		_putchar(buff[buff_index]);

	len += per_neg_handler(**per, **neg, **width, len + buff_index + i, 1);

	return (buff_index + len + 2);
}

/**
 * caseSTR - prints the non printable characters as a hexadecimal value.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @width: width flag value.
 * @per: percision flag.
 * @neg: '-' flag.
 * Return: length of printed address number.
 *
*/
int caseSTR(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **width, __attribute__ ((unused)) int **per,
	__attribute__ ((unused)) int **neg)
{
	char *s = va_arg(args, char *);
	char *str = s;
	int buff_index = 0, i = 0, len = 0, j;
	char buff[BUFSIZ];

	if (!str)
		str = "(null)";
	while (str[i])
	{
		buff_index = 0;
		if (((s[i] > 0 && s[i] < 32)) || s[i] >= 127)
		{
			len += _putchar(92);
			len += _putchar('x');
			if (s[i] <= 15)
			{
				len += _putchar('0');
			}
			buff_index += intoHEX(s[i], &buff_index, buff);
			buff[buff_index] = 0;
			for (j = 0; buff[j]; j++)
			{
				_putchar(buff[j]);
				buff[j] = 0;
				len++;
			}
			buff_index = 0;
		}
		else
			len += _putchar(str[i]);
		i++;
	}

	return (len);
}
