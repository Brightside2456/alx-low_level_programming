#include "main.h"
/**
 * times_table - Funtion to printtimes table
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
			{
				_putchar('0' + ((i * j) / 10));
				_putchar('0' + ((i * j) % 10));
				if (j == 9)
				{

				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + ((i * j) % 10));
				if (j == 9)
				{

				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
