#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Description - Prints the piece of qoute
 * Return: Always 0 (successful)
 */
int main(void)
{
	int size;

	size = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19");
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", size);
	putchar('\n');
	return (0);
}
