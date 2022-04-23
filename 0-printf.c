#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: The string containing all the desired characters
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	int writted_chars;
	specifiers_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed chars);
}
