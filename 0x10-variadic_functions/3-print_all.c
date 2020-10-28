#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_all - prints out chars, ints, floats, and strings
 * @format: a list of types of arguments to pass into function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int len = 0, i = 0, flag = 0;
	char *s;

	while (format[len])
		len++;
	va_start(valist, format);
	while (format[i])
	{
		switch (format[i])
		{
		case NULL:
			printf("");
			break;
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			s = va_arg(valist, char *);
			if (s == NULL)
			{
				printf("%p", s);
				break;
			}
			printf("%s", s);
			break;
		default:
			flag = 1;
			break;
		}
		if (i < len - 1 && flag == 0)
			printf(", ");
		i++;
		flag = 0;
	}
	putchar('\n');
	va_end(valist);
}
