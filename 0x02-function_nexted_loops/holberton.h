# ifndef HEADER_H
# define HEADER_H
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * print_alphabet - writes out the alphabet followed by a new line
 *
 * print_alphabet_x10 - wrints out the alphabet 10 times with new lines.
 *
 * _islower - prints 1 if c is lowercase
 *
 * _isalpha - prints 1 if c is a letter, lowercase or uppercase
 *
 * print_sign - prints +, - , or 0 of number n
 *
 * _abs - prints absolute value of int
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

int _abs(int n)
{
	int result;

	if (n < 0)
	{
		result = n-n*2;
	}
	else if (n > 0)
	{
		result = n;
	}
	else
	{
		result = 0;
	}
	return result;
}
# endif /*HEADER_H*/
