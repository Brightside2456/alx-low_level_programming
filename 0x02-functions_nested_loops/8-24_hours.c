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

	for (ones_min = 0; ones_min <= 2; ones_min++)
	{
		for (tens_min = 0; tens_min <= 3; tens_min++)
		{
			for (tens_hour = 0; tens_hour <= 5; tens_hour++)
			{
				for (ones_hour = 0; ones_hour <= 9; ones_hour++)
				{
					_putchar('0' + ones_min);
					_putchar('0' + (tens_min));
					_putchar(':');
					_putchar('0' + (tens_hour));
					_putchar('0' + (ones_hour));
					_putchar('\n');
				}
			}
		}
	}
}
