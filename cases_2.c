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
