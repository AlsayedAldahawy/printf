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
	int len = 0, j = 0;

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

/**
 * caseROT - prints the rot13'ed string.
 * @args: list of variadic function arguments.
 * Return: length of printed string.
 *
*/
int caseROT(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0, j = 0;
	char rot_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (len)
	{
		for (j = 0; rot_1[j]; j++)
		{
			if (str[len] == rot_1[j])
			{
				str[len] = rot_2[j];
				break;
			}
		}
		len++;
	}
	return (--len);
}
