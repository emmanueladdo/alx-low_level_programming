#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0(successful)
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
	putchar(alpha);
	alpha++;
}
alpha = 'A';
while (alpha <= 'Z')
{
	putchar(alpha);
	alpha++;
}
putchar('\n');
return (0);
}
