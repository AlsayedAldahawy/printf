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
