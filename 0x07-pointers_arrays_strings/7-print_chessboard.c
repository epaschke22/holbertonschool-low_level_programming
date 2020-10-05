#include "holberton.h"
/**
 * print_chessboard - prints out a chessboard
 * @a: the characters to print out.
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
}
