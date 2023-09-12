#include "main.h"

/**
 * jack_bauer - prints every minute of the day, from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	hours = 0;
	while (hours < 24)
	{
		minutes = 0;
		while (minutes < 60)
		{
			_putchar(hours / 10 + 48);
			_putchar(hours % 10 + 48);
			_putchar(':');
			_putchar(minutes / 10 + 48);
			_putchar(minutes % 10 + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
