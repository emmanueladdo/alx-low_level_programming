#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct checker - A new struct type defining a printer.
 * @type: A symbol representing a data type.
 * @f: A function pointer to a function that prints
 *         a data type corresponding to symbol.
 */
typedef struct checker
{
	char *type;
	void (*f)();

} checker;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);
#endif
