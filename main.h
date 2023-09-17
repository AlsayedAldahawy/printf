#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int caseStr(va_list args);
int caseInt(va_list args);
int caseChar(va_list args);
int intobin(unsigned int x);
int caseBin(va_list args);

/**
 * struct specifiers - used to define the function corresponding to
 * the specifier.
 *
 * @s: specifier character
 * @f: pointer to function related to the specifier.
 *
 */
typedef struct specifiers
{
	char s;
	int (*f)();
} specifier_t;

#endif
