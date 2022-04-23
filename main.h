#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct specifiers - defines a structure for symbols and functions
 * @specifier: format specifier
 * @f: The function associated
 */

typedef struct specifiers
{
	char *specifiers;
	int (*f)(va_list);
} specifiers_t;

int parser(const char *format, specifiers_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

#endif
