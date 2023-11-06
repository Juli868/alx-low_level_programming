#include "main.h"
/**
 * jack_bauer - prints every minute of an hour in 24-format
 */
void jack_bauer(void)
{
	int min = 0, hour = 0;

	while (hour < 23)
	{
		while ( min < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar( min % 10 + '0');
			min++;
			_putchar('\n');
		}
		min = 0;
		hour++;
	}
}
