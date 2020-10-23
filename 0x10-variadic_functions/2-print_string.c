#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints out all string arguments
 * @separator: a seperator between numbers
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *vavalue;
	unsigned int i;

	va_start(valist, n);


	for (i = 0; i < n; i++)
	{
		vavalue = va_arg(valist, char *);
		if (vavalue != NULL)
			printf("%s", vavalue);
		else
			printf("%s", "(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');

	va_end(valist);
}
