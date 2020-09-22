#ifndef HEADER_H
#define HEADER_H
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
 * print_last_digit - prints last digit of a number
 *
 * jack_bauer - prints every minute for 24 hours from 00:00 to 23:59
 *
 * times_table - prints the times table for 9 starting with 0.
 *
 * add - prints sum of both arguments
 *
 * print_to_98 - prints all natrual numbers from n to 98.
 *
 */
int _putchar(char c);
void print_alphabet(void); 
void print_alphabet_x10(void);   
int _islower(int c);     
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int);
#endif /*HEADER_H*/
