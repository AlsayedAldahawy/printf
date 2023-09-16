#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

char *buffer[BUFFER_SIZE];

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_number(int n);
int case_char(char f, va_list args);
int case_str(char f, va_list args);
int case_per(char f, char fn);
int case_int(char f, va_list args);

#endif
