#ifndef MAIN_H
#define MAIN_H
#define INT_BITS (4 * 8)

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct call - struct call
 * @t: t flag for data type
 * @f: function associated function
 */
typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call_t;

int _printf(const char *format, ...);
int print_char(char *dest, va_list arg, int count);
int print_str(char *destb, va_list arg, int countb);
int print_int(char *dest, va_list arg, int count);
int print_uint(char *destb, va_list arg, int countb);
int print_per(char *destc, va_list arg, int countc);
int print_bin(char *dest, va_list arg, int count);
int print_oct(char *destb, va_list arg, int countb);
int print_hex(char *dest, va_list arg, int count);
int print_heX(char *dest, va_list arg, int count);
int print_buff(char *buff, unsigned int nbuff);
int print_R13(char *dest, va_list arg, int count);
int print_rev(char *dest, va_list arg, int count);

#endif
