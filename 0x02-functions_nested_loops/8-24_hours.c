#include "main.h"
/**
 * jack_bauer - Funtion to print the time of the day
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int tens_hour;
	int ones_hour;
	int tens_min;
	int ones_min;

	for (tens_hour = 0; tens_hour <= 2; tens_hour++)
	{
		for (ones_hour = 0; ones_hour <= 9; ones_hour++)
		{
			if ((tens_hour == 2) && (ones_hour == 4))
			{
				break;
			}
			for (tens_min = 0; tens_min <= 5; tens_min++)
			{
				for (ones_min = 0; ones_min <= 9; ones_min++)
				{
					_putchar('0' + (tens_hour % 10));
					_putchar('0' + (ones_hour % 10));
					_putchar(':');
					_putchar('0' + (tens_min));
					_putchar('0' + (ones_min));
					_putchar('\n');
				}
			}
		}
	}
}
