#include "main.h"

/**
 * caseRev - prints string reversed.
 * @args: list of variadic function arguments.
 * Return: length of printed string.
 *
*/
int caseRev(va_list args)
{
	char *str = va_arg(args, char *);
	long int len = 0, j = 0;

	for (len = 0; str[len]; len++)
		;
	j = --len;
	while (j >= 0)
	{
		_putchar(str[j]);
		j--;
	}
	return (len);
}
