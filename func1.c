#include "main.h"

/**
 * print_number - function that prints an integer.
 *
 * @n: number to be printed
 *
*/

int print_number(int n)
{
	int num = n;
	unsigned int i, nOfChar = 0;
	int digit;
	int start_digit = 0;

	if (num < 0)
	{
		_putchar('-');
		nOfChar++;
		num *= -1;
	}

	for (i = 1000000000; i >= 1 ; i = i / 10)
	{

		if ((num / i == 0) && (start_digit == 0) && (i != 1))
			continue;

		digit = (num / i) % 10;
		_putchar(digit + '0');
		nOfChar++;
		start_digit = 1;
	}
	return (nOfChar);
}

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *
 * @str: string passed by reference.
 *
 * Return: length of the string
 *
*/

int _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
