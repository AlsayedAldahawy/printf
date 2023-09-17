#include "main.h"

/**
 * _putchar - prints a character to stdout.
 * @c: charachter to be printed.
 * Return: 1.
 *
*/
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * intobin - converts an unsigned int to binary and prints it.
 * @x: int to be converted and printed.
 * Return: length of binary number.
 *
*/
int intobin(unsigned int x)
{
	int len = 0;

	if (x == 0)
	{
		len += _putchar('0');
	}
	else if (x == 1)
	{
		len += _putchar('1');
	}
	else
	{
		if (x % 2)
		{
			len += intobin(x / 2);
			len += _putchar('1');
		}
		else
		{
			len += intobin(x / 2);
			len += _putchar('0');
		}
	}
	return (len);
}
