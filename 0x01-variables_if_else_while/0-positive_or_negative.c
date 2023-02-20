Task 0
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)

{
int n;
srand(time(0)
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("n is positive");
}
else if (n < 0)
{
	printf("n is negative");
}
else
{
	printf("n is zero");
}
	return (0);
}
