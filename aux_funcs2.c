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

	if (x / 2 == 0)
	{
		len += _putchar((x % 2) + '0');
	}
	else
	{
		len += intobin(x / 2);
		len += _putchar((x % 2) + '0');
	}
	return (len);
}

/**
 * intoct - converts an unsigned int to octal and prints it.
 * @x: int to be converted and printed.
 * @buff: buffer holds the octal value.
 * @buff_index: buffer index used to access the buffer.
 * Return: length of octal number.
 *
*/
int intoct(unsigned long int x, int *buff_index, char buff[])
{
	long int len = 0;

	if (x / 8 == 0)
	{
		buff[(*buff_index)++] = (x % 8) + '0';
		len++;
	}
	else
	{
		len += intoct(x / 8, buff_index, buff);
		buff[(*buff_index)++] = (x % 8) + '0';
		len++;
	}
	return (len);
}

/**
 * intohex - converts an unsigned int to hexadecimal and prints it.
 * @x: int to be converted and printed.
 * @buff: buffer holds the octal value.
 * @buff_index: buffer index used to access the buffer.
 * Return: length of hexadecimal number.
 *
*/
int intohex(unsigned long int x, int *buff_index, char buff[])
{
	int len = 0;

	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			buff[(*buff_index)++] = (x % 16) + '0';
			len++;
		}
		else
		{
			buff[(*buff_index)++] = (x % 16) + 87;
			len++;
		}
	}
	else
	{
		len += intohex(x / 16, buff_index, buff);
		if (x % 16 <= 9)
		{
			buff[(*buff_index)++] = (x % 16) + '0';
			len++;
		}
		else
		{
			buff[(*buff_index)++] = (x % 16) + 87;
			len++;
		}
	}
	return (len);
}

/**
 * intoHEX - converts an unsigned int to HEXADECIMAL and prints it.
 * @x: int to be converted and printed.
 * @buff: buffer holds the octal value.
 * @buff_index: buffer index used to access the buffer.
 * Return: length of HEXADECIMAL number.
 *
*/
int intoHEX(unsigned long int x, int *buff_index, char buff[])
{
	int len = 0;

	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			buff[(*buff_index)++] = (x % 16) + '0';
			len++;
		}
		else
		{
			buff[(*buff_index)++] = (x % 16) + 55;
			len++;
		}
	}
	else
	{
		len += intoHEX(x / 16, buff_index, buff);
		if (x % 16 <= 9)
		{
			buff[(*buff_index)++] = (x % 16) + '0';
			len++;
		}
		else
		{
			buff[(*buff_index)++] = (x % 16) + 55;
			len++;
		}
	}
	return (len);
}
