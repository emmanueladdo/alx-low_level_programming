#include <unistd.h>
/**
 * _putchar - writes the character a to standard output
 *@a: the character to print to stdout
 * Return: - (1) on success
 *
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
