#include <stdio.h>

void pre_main_function(void) __attribute__((constructor));

/**
 * pre_main_function - Function executed before the main
 * function.
 */
void pre_main_function(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
    /* Your main code here */
	return (0);
}
