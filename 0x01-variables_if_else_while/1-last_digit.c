#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0(successful)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int nnum;
nnum = n % 10;
if (nnum > 5)
	printf("Last digit of %d is %i and is greater than 5\n", n, num);
else if (nnum == 0)
	printf("Last digit of %d is %i and is 0\n", n, num);
else
	printf("Last digit of %d is %i and is less than 6 and not 0\n", n, num);
return (0);
}
