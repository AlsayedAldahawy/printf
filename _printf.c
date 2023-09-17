#include "main.h"
#define BUFFER_SIZE 1024
/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int nochar = 0, i = 0, skip = 0;
	specifier_t spec[] = {
	{'b', caseBin},
	{'s', caseStr}, {'X', caseHEXA},
	{'i', caseInt}, {'x', casehexa},
	{'d', caseInt}, {'o', caseOctal},
	{'c', caseChar}, {'u', caseUnsigned}
	};

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				return (-1);
			skip = 0;
			for (i = 0; i < 7; i++)
			{
				if (*format == spec[i].s)
				{
					nochar += spec[i].f(args);
					skip = 1;
				}
			}
			if (*format == '%')
				nochar += _putchar(*(format));
			else if (!skip)
				nochar +=  _putchar(*(--format));
		}
		else
			nochar +=  _putchar(*format);
		format++;
	}
	va_end(args);
	return (nochar);
}
