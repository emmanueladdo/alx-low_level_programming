#include "function_pointers.h"

/**
 * print_name - Prints a name from a function pointer
 * @name: character string
 * @f: function pointer that takes string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
