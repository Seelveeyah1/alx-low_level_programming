Task 0
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - To print out the value of an integar
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
	printf("%d is positive\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
else
{
	printf("%d is zero\n" n);
}
	return (0);
}
