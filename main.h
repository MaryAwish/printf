<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * File: main.h
 * Auth: Jan Nelson
 * Desc: Header file containing prototypes for all functions
 */

 /**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
void _write_buffer(char *buffer, int *index);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
char *itos(char str[], long int num);
char *utos(char str[], int num);
int num_len(int num);
int float_len(double f);
void format_i(va_list valist, char *buffer, int *index);
void format_u(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
char *tostring(char str[], int num);
int num_len(int num);
void reset_buffer(char buffer[]);
void *rot13(char *s);
void rev_string(char *s);
void format_h(va_list valist, char *buffer, int *index);
void format_ch(va_list valist, char *buffer, int *index);
void format_o(va_list valist, char *buffer, int *index);
void format_b(va_list valist, char *buffer, int *index);
void format_r(va_list valist, char *buffer, int *index);
void format_R(va_list valist, char *buffer, int *index);
#endif /* MAIN_H */
=======
#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct flags - struct containing flags to "turn on"
 * when a flag specifier is passed to _printf()
 * @plus: flag for the '+' character
 * @space: flag for the ' ' character
 * @hash: flag for the '#' character
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int print_int(va_list l, flags_t *f);
void print_number(int n);
int print_unsigned(va_list l, flags_t *f);
int count_digit(int i);
int print_hex(va_list l, flags_t *f);
int print_hex_big(va_list l, flags_t *f);
int print_binary(va_list l, flags_t *f);
int print_octal(va_list l, flags_t *f);
char *convert(unsigned long int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_string(va_list l, flags_t *f);
int print_char(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *str);
int print_rot13(va_list l, flags_t *f);
int print_rev(va_list l, flags_t *f);
int print_bigS(va_list l, flags_t *f);
int print_address(va_list l, flags_t *f);
int print_percent(va_list l, flags_t *f);

#endif
>>>>>>> 566d7ce271e3a53eeab1625082dcf4c4ad5ad1b7
