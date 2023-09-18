#include "main.h"

/**
 * flagplus - handles the '+' & ' ' flags of integer .
 * @format: format string.
 *
 * Return: 0 if the next character in the format string
 * is {'i', 'd', 'c', ' ', '+', '#', '\0'}.
 *
 * otherwise return 2, which is the number of printed
 * characters to stdout by the function.
 *
 */

int flagplus(char const *format)
{
	char fnext[7] = {'i', 'd', 'c', ' ', '+', '-', '#', '\0'};
	int i, nochar = 0;

	for (i = 0; i < 7; i++)
	{
		if (*(format + 1) == fnext[i])
		{
			return (0);
		}
	}
	nochar += _putchar('%');
	nochar += _putchar(*(format));
	return (nochar);
}

/**
 * flaghash - handles the '#' flag of the Hexadecimal .
 * @format: format string.
 *
 * Return: 0 if the next character in the format string
 * is {'h', 'H', 'c', ' ', '+', '#', '\0'}.
 *
 * otherwise return 2, which is the number of
 * printed characters to stdout by the function.
 *
 */
int flaghash(char const *format)
{
	char fnext[8] = {'X', 'o', 'x', 'c', ' ', '+', '#', '\0'};
	int i, nochar = 0;

	for (i = 0; i < 7; i++)
	{
		if (*(format + 1) == fnext[i])
		{
			return (0);
		}
	}
	nochar += _putchar('%');
	nochar += _putchar(*(format));
	return (nochar);
}
