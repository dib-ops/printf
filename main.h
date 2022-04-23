#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * typedef struct flags
{
	int plus;
	int espace;
	int dieze;
} flags_t;
*/

/**
 * struct rightFunction - struct to choose the right function depending
 * on the format specifier passed to _printf()
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct rightFunction
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} rf;

/* prototypes */
int _printf(const char *format, ...);

#endif
