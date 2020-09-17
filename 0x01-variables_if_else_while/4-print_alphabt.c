/**
 * main - Prints out the alphabet with purchar but not q and e.
 * Return: should return 0.
 */
#include <stdio.h>

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
