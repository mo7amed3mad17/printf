#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

int get_flags(const char *format, int *i);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16


/* SIZES */
#define S_LONG 2
#define S_SHORT 1


/**
 * struct fmt - Struct op
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct fmt fmt_t - Struct op
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;


/*Prototypes*/
int _printf(const char *format, ...);
void print_buffer(char buffer[], int *buff_ind);
/*task0*/
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);
/*task1*/
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
/********/
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int write_pointer(char buffer[], int ind, int length,
		int width, int flags, char padd, char extra_c, int padd_start);
int print_octal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);
/*handlers*/
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int handle_print(const char *fmt, int *ind, va_list list, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char buffer[],
		int flags, int width, int prec, int length, char padd, char extra_c);
int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
int is_digit(char);
#endif
