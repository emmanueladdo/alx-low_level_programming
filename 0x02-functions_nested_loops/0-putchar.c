#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description - this prnts _putchar with using printf
 * Return: - Always return(0)
 *
 */
int main(void)
{
	int lenString;

	lenString = strlen("_putchar");
	write(1, "_putchar", lenString);
	putchar('\n');
	return (0);
}
