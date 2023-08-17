#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything.
 * @format: List of types of arguments passed to the
 * function.
 * @...: The values to print.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char c;
	int num;
	float f;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
			c = va_arg(args, int);
			printf("%s%c", separator, c);
			break;
			case 'i':
			num = va_arg(args, int);
			printf("%s%d", separator, num);
			break;
			case 'f':
			f = va_arg(args, double);
			printf("%s%f", separator, f);
			break;
			case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
			default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
va_end(args);
}
