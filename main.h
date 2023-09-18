#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define CASES 13
#define FLAGS 3

int _printf(const char *format, ...);
int _putchar(char c);
int caseStr(va_list args, char flag[]);
int caseInt(va_list args, char flag[]);
int caseChar(va_list args, char flag[]);
int intobin(unsigned int x);
int caseBin(va_list args, char flag[]);
int caseUnsigned(va_list args, char flag[]);
int intoct(unsigned int x);
int caseOctal(va_list args, char flag[]);
int casehexa(va_list args, char flag[]);
int intohex(unsigned long int x);
int caseHEXA(va_list args, char flag[]);
int intoHEX(unsigned long int x);
int caseSTR(va_list args, char flag[]);
int caseaddr(va_list args, char flag[]);
int caseRev(va_list args, char flag[]);
int caseROT(va_list args, char flag[]);
int flag_finder(char f, char flag[]);
void flag_eraser(char flag[]);
int flaghash(char const *format);
int flagplus(char const *format);
int printlong(va_list args);
int printshort(va_list args);
int printlongHex(va_list args, int c);
int printshortHex(va_list args, int c);
int printshortoct(va_list args);
int printlongoct(va_list args);
int printshrtunsi(va_list args);
int printlongunsi(va_list args);
/*int flagspace(char const *format);*/
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
	int (*f)(va_list, char []);
} specifier_t;

/**
 * struct flags - used to define the function corresponding to
 * the specifier.
 *
 * @s: specifier character
 * @f: pointer to function related to the flag.
 *
 */
typedef struct flags
{
	char s;
	int (*f)();
} flags_t;

#endif
