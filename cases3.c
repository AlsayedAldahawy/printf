#include "main.h"

/**
 * caseRev - prints string reversed.
 * @args: list of variadic function arguments.
 * @flag: flags
 * Return: length of printed string.
 *
*/
int caseRev(va_list args, __attribute__ ((unused)) char flag[])
{
	char *str = va_arg(args, char *);
	int len = 0, j = 0;

	for (len = 0; str[len]; len++)
		;
	j = len - 1;
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
 * @flag: flags
 * Return: length of printed string.
 *
*/
int caseROT(va_list args, __attribute__ ((unused)) char flag[])
{
	char *str = va_arg(args, char *);
	int len = 0, j = 0, skip = 0;
	char rot_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[len])
	{
		skip = 0;
		for (j = 0; rot_1[j]; j++)
		{
			if (str[len] == rot_1[j])
			{
				_putchar(rot_2[j]);
				skip = 1;
				break;
			}
		}
		if (!skip)
			_putchar(str[len]);
		len++;
	}
	return (len);
}
