#include "main.h"

/**
 * flag_finder - finds the flag inside the flag array.
 * @f: the flag to be founded.
 * @flag: the flag array to be searched.
 * Return: 1 if the flag ocuurs, otherwise 0.
 *
*/

int flag_finder(char f, char flag[])
{
	int i = 0;

	while (flag[i])
	{
		if (flag[i] == f)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/**
 * flag_eraser - empty the flag array.
 * @flag: the flag array to be erased.
 *
*/
void flag_eraser(char flag[])
{
	int i = 0;

	while (flag[i])
	{
		flag[i] = 0;
		i++;
	}
}

/**
 * _long - handles long integers.
 * @x: long number to be printed.
 * Return: length of printed number.
 *
*/
int _long(unsigned long int x)
{
	int len = 0;
	long int d = 10;

	if (x / 10 == 0)
	{
		len += _putchar((x % d) + '0');
	}
	else
	{
		len += _long(x / d);
		len += _putchar((x % d) + '0');
	}
	return (len);
}

/**
 * _short - handles short integers.
 * @x: short number to be printed.
 * Return: length of printed number.
 *
*/
int _short(unsigned short int x)
{
	int len = 0;
	long int d = 10;

	if (x / 10 == 0)
	{
		len += _putchar((x % d) + '0');
	}
	else
	{
		len += _long(x / d);
		len += _putchar((x % d) + '0');
	}
	return (len);
}

/**
 * per_neg_handler - function that handles width, percision and '-' flag
 * for different data types.
 * @per: variable represents if the '.' flag is present.
 * @neg: variable represents if the '-' flag is present.
 * @width: variable represents width flag value.
 * @i: number of characters of the passed variadic argument.
 * @selector: mode selector, select between '.' and '-' mode.
 * Return: length of printed string.
 *
*/
int per_neg_handler(int per, int neg, int width, int i, int selector)
{
	int n = 0;

	if (width > i)
	{
		if (per && !neg && !selector)
		{
			while (width > i)
			{
				n += _putchar('0');
				(i)++;
			}
		}
		else if (neg && selector)
		{
			while (width > i)
			{
				n += _putchar(' ');
				(i)++;
			}
		}
		else
		{
			while (width > i && !per && !neg && !selector)
			{
				n += _putchar(' ');
				(i)++;
			}
		}
	}
	return (n);
}
