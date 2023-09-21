#include "main.h"

/**
 * caseOctal - prints a octal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed octal number.
 *
*/

int caseOctal(va_list args, char flag[])
{
	unsigned int x = va_arg(args, unsigned int);
	int isFlag = 0;

	if (flag_finder('#', flag) && x)
	{
		isFlag += _putchar('0');
	}

	flag_eraser(flag);

	return (intoct(x) + isFlag);
}

/**
 * casehexa - prints a hexadecimal number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed hexadecimal number.
 *
*/
int casehexa(va_list args, char flag[])
{
	unsigned long int x = va_arg(args, unsigned int);

	int isFlag = 0;

	if (flag_finder('#', flag) && x)
	{
		isFlag += _putchar('0');
		isFlag += _putchar('x');

	}
	flag_eraser(flag);
	return (intohex(x) + isFlag);
}

/**
 * caseHEXA - prints a HEXADECIMAL number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed HEXADECIMAL number.
 *
*/
int caseHEXA(va_list args, char flag[])
{
	unsigned long int x = va_arg(args, unsigned int);

	int isFlag = 0;

	if (flag_finder('#', flag) && x)
	{
		isFlag += _putchar('0');
		isFlag += _putchar('x');

	}
	flag_eraser(flag);
	return (intoHEX(x) + isFlag);
}

/**
 * caseaddr - prints a ptr address number to stdout.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed address number.
 *
*/
int caseaddr(va_list args, __attribute__ ((unused)) char flag[])
{
	void *x = va_arg(args, void*);
	unsigned int len = 0;
	char *s = "(nil)";
	unsigned long int ptr;

	if (x == NULL)
	{
		for (len = 0; s[len]; len++)
		{
			_putchar(s[len]);
		}
		return (len);
	}
	ptr = (unsigned long int) x;

	len += _putchar('0');
	len += _putchar('x');

	return (intohex(ptr) + len);
}

/**
 * caseSTR - prints the non printable characters as a hexadecimal value.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed address number.
 *
*/
int caseSTR(va_list args, __attribute__ ((unused)) char flag[])
{
	char *s = va_arg(args, char *);
	int i = 0, len = 0;
	char *str = s;

	if (!str)
	{
		str = "(null)";
	}

	while (str[i])
	{
		if (((s[i] > 0 && s[i] < 32)) || s[i] >= 127)
		{
			len += _putchar(92);
			len += _putchar('x');
			if (s[i] <= 15)
			{
				len += _putchar('0');
			}

			len += intoHEX(s[i]);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	return (len);
}
