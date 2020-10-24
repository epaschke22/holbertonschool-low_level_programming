#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * check_space - checks whether a comman and space should be added
 * @format: list of type of arguments
 * @place: current place in loop
 * @len: len of format
 * Return: void
 */
void check_space(const char * const format, int place, int len)
{
	char c;

	c = format[place + 1];
	if (place < len - 1 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		printf(", ");
	if (c == 'h')
		c = 'g';
}

/**
 * print_all - prints out chars, ints, floats, and strings
 * @format: a list of types of arguments to pass into function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int len = 0, i = 0;
	char *s;

	while (format[len])
		len++;
	va_start(valist, format);
	while (format[i])
	{
		switch (format[i])
		{
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
			break;
		}
		check_space(format, i, len);
		i++;
	}
	putchar('\n');
	va_end(valist);
}
