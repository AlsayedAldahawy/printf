#include "main.h"
#define BUFFER_SIZE 1024

/**
 * caseselector - select the specifier case according to the format character.
 * @sp: specifier character to be followed.
 * @args: variadic function arguments list.
 * @flg_indx: index of the flag array, passed by reference to be reset to 0.
 * @n: number of character, passed by reference to be incremented.
 * @flag: flag array contains the flags the occured.
 * Return: skip: a variable used to skip printing the specifier characters.
*/
int caseselector(va_list args, char sp, int *flg_indx, int *n, char flag[])
{
	int i = 0, skip = 0;
	specifier_t spec[] = {
	{'b', caseBin}, {'S', caseSTR},
	{'s', caseStr}, {'X', caseHEXA},
	{'p', caseaddr}, {'r', caseRev},
	{'d', caseInt}, {'x', casehexa},
	{'R', caseROT}, {'o', caseOctal},
	{'i', caseInt}, {'u', caseUnsigned},
	{'c', caseChar}
	};

	for (i = 0; i < CASES; i++)
	{
		if (sp == spec[i].s)
		{
			*flg_indx = 0;
			*n += spec[i].f(args, flag);
			skip = 1;
		}
	}
	return (skip);
}

/**
 * flagselector - select the flag case according to the format character.
 * @format: format string
 * @flg_indx: index of the flag array, passed by reference to be reset to 0.
 * @flag: flag array contains the flags the occured.
 * Return: go_to: define which label should go to.
*/
int flagselector(const char *format, int *flg_indx, char flag[])
{
	flags_t fgs[] = {
	{'#', flaghash},
	{'+', flagplus},
	{' ', flagplus}
	};
	int i = 0, go_to = 0;

	for (i = 0; i < FLAGS; i++)
	{
		if (*format == fgs[i].s)
		{
			flag[*flg_indx++] = *format;
			if (!fgs[i].f(format))
			{
				go_to = 1;
				break;
			}
			else
			{
				go_to = 2;
				break;
			}
		}
	}
	return (go_to);
}
/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	char flag[20] = "00000000000000000000";
	int flg_indx = 0, nochar = 0, skip = 0, go_to;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
MAINLOOP:
		if (*format == '%')
		{
FLAGLOOP:
			format++;
			if (*format == '\0')
				return (-1);
			skip = 0;
			skip = caseselector(args, *format, &flg_indx, &nochar, flag);
			go_to = flagselector(format, &flg_indx, flag);
			if (go_to == 1)
				goto FLAGLOOP;
			else if (go_to == 2)
			{
				flg_indx = 0;
				format++;
				nochar += 2;
				goto MAINLOOP;
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
