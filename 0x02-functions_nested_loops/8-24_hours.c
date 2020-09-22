#include "holberton.h"
/**
 * jack_bauer - prints out every minute for 24 hours, 00:00 to 23:59
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int minuteOnes;
	int minuteTens;
	int hour;

	for (hour = 0; hour < 23; hour++)
	{
		for (minuteTens = 0; minuteTens < 6; minuteTens++)
		{
			for (minuteOnes = 0; minuteOnes < 10; minuteOnes++)
			{
				_putchar(hour / 10 + '0');
				_putchar(hour % 10 + '0');
				_putchar(':');
				_putchar(minuteTens + '0');
				_putchar(minuteOnes + '0');
				_putchar('\n');
			}
		}
	}
}
