#include "main.h"

int printlongHex(va_list args, int c)
{
    long int x = va_arg(args, int long);
	int len = 0;
	if (x / 16 == 0)
	{
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
	}
	else
	{
		len += intohex(x / 16);
		if (x % 16 <= 9)
		{
			len += _putchar((x % 16) + '0' + c);
		}
		else
		{
			len += _putchar((x % 16) + 87 + c);
		}
	}
	return (len);
}

