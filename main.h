#ifndef _MAIN_H
#define _MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specify_s;

int specify(char con_spec, va_list args);
int _printf(const char *format, ...);
int put_things(char character);
int print_char(va_list args);
int print_str(va_list args);
int print_string(char *cha);
int print_percent(va_list args);
int print_digit(va_list args);
int print_rev(va_list args);
#endif
