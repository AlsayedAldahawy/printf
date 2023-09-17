#include "main.h"

/**
 * caseOctal - prints a octal number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed octal number.
 *
*/

int caseOctal(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intoct(x));
}

/**
 * casehexa - prints a hexadecimal number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed hexadecimal number.
 *
*/
int casehexa(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intohex(x));
}

/**
 * caseHEXA - prints a HEXADECIMAL number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed HEXADECIMAL number.
 *
*/
int caseHEXA(va_list args)
{
	unsigned int x = va_arg(args, unsigned int);

	return (intoHEX(x));
}

/**
 * caseaddr - prints a ptr address number to stdout.
 * @args: list of variadic function arguments.
 * Return: length of printed address number.
 *
*/
int caseaddr(va_list args)
{
	unsigned int x = va_arg(args, int);

	return (intoHEX(x));
}

/**
 * caseSTR - prints the non printaable characters as a hexadecimal value.
 * @args: list of variadic function arguments.
 * Return: length of printed address number.
 *
*/
int caseSTR(va_list args)
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
		}
		i++;
	}
	return (i + len);
}

