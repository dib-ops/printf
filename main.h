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

typedef struct specifier
{
	char *specifiers;
	int (*f)(va_list);
} spec;

/*prototypes*/
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);

#endif
