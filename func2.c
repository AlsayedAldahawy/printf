#include "main.h"


/**
 * case_per - case if the character was "%".
 *
 * @f: current character.
 * @fn: next character.
 * @per: number of consequence '%'
 * Return: the number of characters printed
 *
 */

int case_per(char f, char fn, unsigned int *per)
{
	char *str = "idsc";
	int j = 0, next = 0, n = 0;

	while (str[j])
	{
		if (fn == str[j])
			next = 1;
		j++;
	}

	if (*per % 2 && next == 0)
	{
		n += _putchar(f);
	}
	return (n);
}

/**
 * case_char - case if the character was "c".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_char(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += _putchar(va_arg(args, int));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}

/**
 * case_str - case if the character was "s".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_str(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += _puts(va_arg(args, char *));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}
/**
 * case_int - case if the character was "i or d".
 *
 * @f: the character.
 * @per: number of consequence '%'
 * @args: va list.
 * Return: the number of characters printed
 *
 */
int case_int(char f, unsigned int *per, va_list args)
{
	int n = 0;

	if (*per % 2)
	{
		n += print_number(va_arg(args, int));
	}
	else
		n += _putchar(f);
	*per = 0;
	return (n);
}
