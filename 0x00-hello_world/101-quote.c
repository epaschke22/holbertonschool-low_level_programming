#include <stdio.h>
#include <unistd.h>

/**
 * main - outputs message without puts or printf, and prints it to error
 * Return: prints out a message and return 1.
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
