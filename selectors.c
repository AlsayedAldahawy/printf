#include "main.h"

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
 * @f: format string
 * @n: number of characters.
 * @flg_i: index of the flag array, passed by reference to be reset to 0.
 * @flag: flag array contains the flags the occured.
 * @args: variadic function arguments list.
 * Return: go_to: define which label should go to.
*/
int flagselector(const char *f, int *flg_i, char flag[], int *n, va_list args)
{
	int x, i = 0, go_to = 0;
	flags_t fgs[] = {{'#', flaghash}, {'+', flagplus}, {' ', flagplus}};

	for (i = 0; i < 3; i++)
	{
		if ((*f == fgs[i].s) == 1)
		{
			flag[*flg_i] = *f;
			(*flg_i)++;
			x = fgs[i].f(f);
			if (!x)
			{
				go_to = 1;
				break;
			}
			else
			{
				*flg_i = 0;
				*n += 2;
				go_to = 2;
				break;
			}
		}
	}
	if (lhflags(&n, args, f))
	{
		if (*(f + 2))
			go_to = 3;
		else
		 go_to = 4;
	} else if (*(f + 1) == '\n')
	{
		go_to = 5;
	}
	return (go_to);
}

/**
 * lhflags - handles the l and h flags.
 * @f: format string
 * @nochar: number of characters.
 * @args: va_list
 * Return: go_to: define which label should go to.
*/
int lhflags(int **nochar, va_list args, const char *f)
{
	if ((*f == 'l' || *f == 'h') && ((*(f + 1)) == 'd' || (*(f + 1)) == 'i'))
	{
		if (*f == 'l')
			**nochar += printlong(args);
		else
			**nochar += printshort(args);
		return (1);
	}
	if (*f == 'l' && ((*(f + 1)) == 'x' || (*(f + 1)) == 'X'))
	{
		**nochar += printlongHex(args, *(f + 1));
		return (1);
	}
	if (*f == 'h' && ((*(f + 1)) == 'x' || (*(f + 1)) == 'X'))
	{
		**nochar += printshortHex(args, *(f + 1));
		return (1);
	}
	if ((*f == 'h' || *f == 'l') && ((*(f + 1)) == 'o'))
	{
		if (*f == 'h')
			**nochar += printshortoct(args);
		else
			**nochar += printlongoct(args);
		return (1);
	}
	if ((*f == 'h' || *f == 'l') && ((*(f + 1)) == 'u'))
	{
		if (*f == 'h')
			**nochar += printshrtunsi(args);
		else
			**nochar += printlongunsi(args);
		return (1);
	}
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
