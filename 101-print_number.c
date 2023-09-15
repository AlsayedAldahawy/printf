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
