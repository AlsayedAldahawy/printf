#include "main.h"

/**
 * caseOctal - prints a octal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed octal number.
 *
*/

int caseOctal(va_list args, char flag[], __attribute__ ((unused)) int **weight)
{
	unsigned int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0, j;
	char buff[BUFSIZ];

	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		len++;
	}
	flag_eraser(flag);

	i += intoct(x, &buff_index, buff);
	len += i;
	buff[buff_index] = 0;
	while (**weight > len)
	{
		_putchar(' ');
		len++;
	}

	for (j = 0; buff[j]; j++)
	{
		_putchar(buff[j]);
	}
	return (len);
}

/**
 * casehexa - prints a hexadecimal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed hexadecimal number.
 *
*/
int casehexa(va_list args, char flag[], __attribute__ ((unused)) int **weight)
{
	unsigned long int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0, j;
	char buff[BUFSIZ];

	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		buff[buff_index++] = 'x';
		len += 2;
	}
	flag_eraser(flag);

	i += intohex(x, &buff_index, buff);
	len += i;
	buff[buff_index] = 0;
	while (**weight > len)
	{
		_putchar(' ');
		len++;
	}

	for (j = 0; buff[j]; j++)
	{
		_putchar(buff[j]);
	}
	return (len);
}

/**
 * caseHEXA - prints a HEXADECIMAL number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed HEXADECIMAL number.
 *
*/
int caseHEXA(va_list args, char flag[], __attribute__ ((unused)) int **weight)
{
	unsigned long int x = va_arg(args, unsigned int);
	int buff_index = 0, len = 0, i = 0, j;
	char buff[BUFSIZ];

	if (flag_finder('#', flag) && x)
	{
		buff[buff_index++] = '0';
		buff[buff_index++] = 'X';
		len += 2;
	}
	flag_eraser(flag);

	i += intoHEX(x, &buff_index, buff);
	len += i;
	buff[buff_index] = 0;
	while (**weight > len)
	{
		_putchar(' ');
		len++;
	}

	for (j = 0; buff[j]; j++)
	{
		_putchar(buff[j]);
	}
	return (len);
}

/**
 * caseaddr - prints a ptr address number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed address number.
 *
*/
int caseaddr(va_list args, __attribute__ ((unused)) char flag[],
	__attribute__ ((unused)) int **weight)
{
	void *x = va_arg(args, void*);
	unsigned int len = 0;
	char *s = "(nil)";
	unsigned long int ptr;
	int buff_index = 0, i = 0, j;
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

	buff[buff_index++] = '0';
	buff[buff_index++] = 'x';
	len += 2;

	len += intohex(ptr, &buff_index, buff);
	buff[buff_index++] = 0;
	i = len;
	while (**weight > i)
	{
		_putchar(' ');
		i++;
	}
	j = 0;
	while (buff[j])
	{
		_putchar(buff[j]);
		i++;
	}
	return (i + j);
}

/**
 * caseSTR - prints the non printable characters as a hexadecimal value.
 * @args: list of variadic function arguments.
 * @flag: flags
 * @weight: weight flag value.
 * Return: length of printed address number.
 *
*/
int caseSTR(va_list args, __attribute__ ((unused)) char flag[], int **weight)
{
	char *s = va_arg(args, char *);
	char *str = s;
	int buff_index = 0, i = 0, len = 0;
	char buff[BUFSIZ];

	if (!str)
		str = "(null)";
	while (str[i])
	{
		if (((s[i] > 0 && s[i] < 32)) || s[i] >= 127)
		{
			buff[buff_index++] = 92;
			buff[buff_index++] = 'x';
			if (s[i] <= 15)
			{
				buff[buff_index++] = '0';
			}
			buff_index += intoHEX(s[i], &buff_index, buff);
		}
		else
			buff[buff_index++] = str[i];
		i++;
	}
	buff[buff_index++] = 0;
	i = buff_index;
	while (**weight > i)
	{
		_putchar(' ');
		i++;
		len++;
	}
	for (i = 0; buff[i]; i++)
	{
		_putchar(buff[i]);
		len++;
	}
	**weight = 0;
	return (len);
}
