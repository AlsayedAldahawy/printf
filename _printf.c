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
 * @nochar: number of characters.
 * @flg_indx: index of the flag array, passed by reference to be reset to 0.
 * @flag: flag array contains the flags the occured.
 * Return: go_to: define which label should go to.
*/
int flagselector(const char *format, int *flg_indx, char flag[], int *nochar)
{
	flags_t fgs[] = {
	{'#', flaghash},
	{'+', flagplus},
	{' ', flagplus},
	};
	int i = 0, go_to = 0;

	for (i = 0; i < FLAGS; i++)
	{
		if (*format == fgs[i].s)
		{
			flag[*flg_indx] = *format;
			(*flg_indx)++;
			if (!fgs[i].f(format))
			{
				go_to = 1;
				break;
			}
			else
			{
				*flg_indx = 0;
				*nochar += 2;
				go_to = 2;
				break;
			}
		}
	}
	return (go_to);
}

/**
 * lhflags - handles the l and h flags.
 * @format: format string
 * @nochar: number of characters.
 * @args: va_list
 * Return: go_to: define which label should go to.
*/
int lhflags(int *nochar, va_list args, const char *format)
{
	if (*format == 'l' && ((*(format + 1)) == 'd' || (*(format + 1)) == 'i'))
	{
		*nochar += printlong(args);
		return (1);
	}
	if (*format == 'h' && ((*(format + 1)) == 'd' || (*(format + 1)) == 'i'))
	{
		*nochar += printshort(args);
		return (1);
	}
	if (*format == '%')
		nochar += _putchar(*(format));
	return (0);
}

/**
 * setvariables - set variables to 0.
 * @skip: to be set
 * @go_to: to be set
*/
void setvariables(int *skip, int *go_to)
{
	*skip = 0;
	*go_to = 0;
}
/**
 * _printf - prints a formated text to stdout.
 * @format: format to be followed.
 * Return: length of printed text.
*/
int _printf(const char *format, ...)
{
	va_list args;
	char flag[40] = "0000000000000000000000000000000000000000";
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
			setvariables(&skip, &go_to);
			skip = caseselector(args, *format, &flg_indx, &nochar, flag);
			go_to = flagselector(format, &flg_indx, flag, &nochar);
			if (go_to == 1)
				goto FLAGLOOP;
			else if (go_to == 2)
			{
				format++;
				goto MAINLOOP;
			}
			if (lhflags(&nochar, args, format))
			{
				format += 2;
				goto MAINLOOP;
			}
			if (!skip)
				nochar +=  _putchar(*(--format));
		}
		else
			nochar +=  _putchar(*format);
		format++;
	}
	va_end(args);
	return (nochar);
}
