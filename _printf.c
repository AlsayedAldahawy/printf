#include "main.h"
#define BUFFER_SIZE 1024
#define CASES 13
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
	{'b', caseBin}, {'S', caseSTR},
	{'s', caseStr}, {'X', caseHEXA},
	{'i', caseInt}, {'x', casehexa}, {'R', caseROT},
	{'d', caseInt}, {'o', caseOctal}, {'r', caseRev},
	{'c', caseChar}, {'u', caseUnsigned}, {'p', caseaddr},
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
			for (i = 0; i < CASES; i++)
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
