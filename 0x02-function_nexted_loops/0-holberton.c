/**
 * main - prints out Holberton with putchar and a forloop
 * Return: should always return 0
 */
#include <stdio.h>

int main(void)
{
	char Hstring[] = "Holberton";
	int i;

	for(i = 0; Hstring[i] != '\0'; i++)
	{
		putchar(Hstring[i]);
	}
	putchar('\n');
	return (0);
}
